/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/qualified/src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h"

namespace apache {
namespace thrift {
namespace ident {
struct first;
struct second;
struct s;
struct id;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_s
#define APACHE_THRIFT_ACCESSOR_s
APACHE_THRIFT_DEFINE_ACCESSOR(s);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace module2 {
class Struct;
class BigStruct;
} // module2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace module2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class Struct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::first,
    ::apache::thrift::ident::second
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::struct_t<::module0::Struct>,
    ::apache::thrift::type::struct_t<::module1::Struct>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = Struct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Struct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Struct(apache::thrift::FragileConstructor, ::module0::Struct first__arg, ::module1::Struct second__arg);

  Struct(Struct&&) noexcept;

  Struct(const Struct& src);


  Struct& operator=(Struct&&) noexcept;
  Struct& operator=(const Struct& src);
 private:
  ::module0::Struct __fbthrift_field_first;
 private:
  ::module1::Struct __fbthrift_field_second;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const Struct&) const;
  bool operator<(const Struct&) const;

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> first_ref() const& {
    return {this->__fbthrift_field_first, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> first_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_first), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> first_ref() & {
    return {this->__fbthrift_field_first, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> first_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_first), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> first() const& {
    return {this->__fbthrift_field_first, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> first() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_first), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> first() & {
    return {this->__fbthrift_field_first, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> first() && {
    return {static_cast<T&&>(this->__fbthrift_field_first), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> second_ref() const& {
    return {this->__fbthrift_field_second, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> second_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_second), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> second_ref() & {
    return {this->__fbthrift_field_second, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> second_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_second), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> second() const& {
    return {this->__fbthrift_field_second, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> second() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_second), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> second() & {
    return {this->__fbthrift_field_second, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> second() && {
    return {static_cast<T&&>(this->__fbthrift_field_second), __isset.at(1), __isset.bit(1)};
  }
  const ::module0::Struct& get_first() const&;
  ::module0::Struct get_first() &&;

  template <typename T_Struct_first_struct_setter = ::module0::Struct>
  [[deprecated("Use `FOO.first_ref() = BAR;` instead of `FOO.set_first(BAR);`")]]
  ::module0::Struct& set_first(T_Struct_first_struct_setter&& first_) {
    first_ref() = std::forward<T_Struct_first_struct_setter>(first_);
    return __fbthrift_field_first;
  }
  const ::module1::Struct& get_second() const&;
  ::module1::Struct get_second() &&;

  template <typename T_Struct_second_struct_setter = ::module1::Struct>
  [[deprecated("Use `FOO.second_ref() = BAR;` instead of `FOO.set_second(BAR);`")]]
  ::module1::Struct& set_second(T_Struct_second_struct_setter&& second_) {
    second_ref() = std::forward<T_Struct_second_struct_setter>(second_);
    return __fbthrift_field_second;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Struct>;
  friend void swap(Struct& a, Struct& b);
};

template <class Protocol_>
unsigned long Struct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class BigStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::s,
    ::apache::thrift::ident::id
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::struct_t<::module2::Struct>,
    ::apache::thrift::type::i32_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = BigStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  BigStruct() :
      __fbthrift_field_id() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BigStruct(apache::thrift::FragileConstructor, ::module2::Struct s__arg, ::std::int32_t id__arg);

  BigStruct(BigStruct&&) noexcept;

  BigStruct(const BigStruct& src);


  BigStruct& operator=(BigStruct&&) noexcept;
  BigStruct& operator=(const BigStruct& src);
 private:
  ::module2::Struct __fbthrift_field_s;
 private:
  ::std::int32_t __fbthrift_field_id;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const BigStruct&) const;
  bool operator<(const BigStruct&) const;

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> s_ref() const& {
    return {this->__fbthrift_field_s, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> s_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_s), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> s_ref() & {
    return {this->__fbthrift_field_s, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> s_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_s), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> s() const& {
    return {this->__fbthrift_field_s, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> s() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_s), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> s() & {
    return {this->__fbthrift_field_s, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> s() && {
    return {static_cast<T&&>(this->__fbthrift_field_s), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->__fbthrift_field_id, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_id), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->__fbthrift_field_id, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_id), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id() const& {
    return {this->__fbthrift_field_id, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_id), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id() & {
    return {this->__fbthrift_field_id, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id() && {
    return {static_cast<T&&>(this->__fbthrift_field_id), __isset.at(1), __isset.bit(1)};
  }
  const ::module2::Struct& get_s() const&;
  ::module2::Struct get_s() &&;

  template <typename T_BigStruct_s_struct_setter = ::module2::Struct>
  [[deprecated("Use `FOO.s_ref() = BAR;` instead of `FOO.set_s(BAR);`")]]
  ::module2::Struct& set_s(T_BigStruct_s_struct_setter&& s_) {
    s_ref() = std::forward<T_BigStruct_s_struct_setter>(s_);
    return __fbthrift_field_s;
  }

  ::std::int32_t get_id() const {
    return __fbthrift_field_id;
  }

  [[deprecated("Use `FOO.id_ref() = BAR;` instead of `FOO.set_id(BAR);`")]]
  ::std::int32_t& set_id(::std::int32_t id_) {
    id_ref() = id_;
    return __fbthrift_field_id;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<BigStruct>;
  friend void swap(BigStruct& a, BigStruct& b);
};

template <class Protocol_>
unsigned long BigStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // module2