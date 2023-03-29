/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <thrift/lib/cpp2/Adapt.h>
#include <thrift/lib/cpp2/Thrift.h>

namespace apache {
namespace thrift {

namespace detail {
namespace bound {

template <typename T>
struct Always {
  template <typename...>
  using apply = T;
};
template <template <typename...> class T, typename... Bound>
struct Bind {
  template <typename... Args>
  using apply = T<Bound..., Args...>;
};
template <template <typename...> class T, typename... Bound>
struct BindBack {
  template <typename... Args>
  using apply = T<Args..., Bound...>;
};

} // namespace bound
} // namespace detail

template <typename AdaptedT>
struct IndirectionAdapter {
  template <typename ThriftT>
  static constexpr AdaptedT fromThrift(ThriftT&& value) {
    AdaptedT adapted;
    toThrift(adapted) = std::forward<ThriftT>(value);
    return adapted;
  }
  FOLLY_ERASE static constexpr decltype(auto)
  toThrift(AdaptedT& adapted) noexcept(
      noexcept(::apache::thrift::apply_indirection(adapted))) {
    return ::apache::thrift::apply_indirection(adapted);
  }
  FOLLY_ERASE static constexpr decltype(auto)
  toThrift(const AdaptedT& adapted) noexcept(
      noexcept(::apache::thrift::apply_indirection(adapted))) {
    return ::apache::thrift::apply_indirection(adapted);
  }
};

namespace type {
template <typename Type, typename Tag>
using indirected = adapted<
    ::apache::thrift::IndirectionAdapter<Type>,
    cpp_type<
        folly::remove_cvref_t<::apache::thrift::adapt_detail::thrift_t<
            ::apache::thrift::IndirectionAdapter<Type>,
            folly::remove_cvref_t<Type>>>,
        Tag>>;
}

template <typename AdaptedT, typename ThriftT>
struct StaticCastAdapter {
  template <typename T>
  static constexpr decltype(auto) fromThrift(T&& value) {
    return static_cast<AdaptedT>(std::forward<T>(value));
  }
  template <typename T>
  static constexpr decltype(auto) toThrift(T&& value) {
    return static_cast<ThriftT>(std::forward<T>(value));
  }
};

struct BaseInlineAdapter {
  template <typename U>
  static decltype(auto) toThrift(U&& value) {
    return std::forward<U>(value).toThrift();
  }

  template <typename U>
  static void clear(U& value) {
    static_assert(
        adapt_detail::is_mutable_ref<decltype(value.toThrift())>::value,
        "not a mutable reference");
    apache::thrift::clear(value.toThrift());
  }
};

// A adapters for types that know how to adapt themselves.
template <typename F>
struct BoundInlineAdapter : BaseInlineAdapter {
  template <
      typename U,
      typename T = typename F::template apply<folly::remove_cvref_t<U>>>
  static T fromThrift(U&& value) {
    return T{std::forward<U>(value)};
  }
};

template <typename T>
using InlineAdapter = BoundInlineAdapter<detail::bound::Always<T>>;
template <template <typename...> class T, typename... Args>
using TemplateInlineAdapter =
    BoundInlineAdapter<detail::bound::Bind<T, Args...>>;
template <template <typename...> class T, typename... Args>
using BackTemplateInlineAdapter =
    BoundInlineAdapter<detail::bound::BindBack<T, Args...>>;

} // namespace thrift
} // namespace apache
