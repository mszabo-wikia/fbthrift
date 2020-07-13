/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct first;
struct second;
struct third;
struct isTrue;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_third
#define APACHE_THRIFT_ACCESSOR_third
APACHE_THRIFT_DEFINE_ACCESSOR(third);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_isTrue
#define APACHE_THRIFT_ACCESSOR_isTrue
APACHE_THRIFT_DEFINE_ACCESSOR(isTrue);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class BasicTypes;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class BasicTypes final  {
 public:
  using __fbthrift_cpp2_type = BasicTypes;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  BasicTypes() :
      first(0),
      second(0),
      third(0),
      isTrue(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BasicTypes(apache::thrift::FragileConstructor, int32_t first__arg, int32_t second__arg, int64_t third__arg, bool isTrue__arg);

  BasicTypes(BasicTypes&&) = default;

  BasicTypes(const BasicTypes&) = default;

  BasicTypes& operator=(BasicTypes&&) = default;

  BasicTypes& operator=(const BasicTypes&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
  int32_t first;
 private:
  int32_t second;
 private:
  int64_t third;
 public:
  bool isTrue;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool second;
    bool third;
    bool isTrue;
  } __isset = {};
  bool operator==(const BasicTypes& rhs) const;
#ifndef SWIG
  friend bool operator!=(const BasicTypes& __x, const BasicTypes& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const BasicTypes& rhs) const;
#ifndef SWIG
  friend bool operator>(const BasicTypes& __x, const BasicTypes& __y) {
    return __y < __x;
  }
  friend bool operator<=(const BasicTypes& __x, const BasicTypes& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const BasicTypes& __x, const BasicTypes& __y) {
    return !(__x < __y);
  }
#endif
  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto first_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->first};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto first_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->first)};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto first_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->first};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto first_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->first)};
  }

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> second_ref() const& {
    return {this->second, __isset.second};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> second_ref() const&& {
    return {std::move(this->second), __isset.second};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> second_ref() & {
    return {this->second, __isset.second};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> second_ref() && {
    return {std::move(this->second), __isset.second};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> third_ref() const& {
    return {this->third, __isset.third};
  }

  template <typename..., typename T = int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> third_ref() const&& {
    return {std::move(this->third), __isset.third};
  }

  template <typename..., typename T = int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> third_ref() & {
    return {this->third, __isset.third};
  }

  template <typename..., typename T = int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> third_ref() && {
    return {std::move(this->third), __isset.third};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> isTrue_ref() const& {
    return {this->isTrue, __isset.isTrue};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> isTrue_ref() const&& {
    return {std::move(this->isTrue), __isset.isTrue};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> isTrue_ref() & {
    return {this->isTrue, __isset.isTrue};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> isTrue_ref() && {
    return {std::move(this->isTrue), __isset.isTrue};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  int32_t get_first() const {
    return first;
  }

  int32_t& set_first(int32_t first_) {
    first = first_;
    return first;
  }

  const int32_t* get_second() const& {
    return second_ref() ? std::addressof(second) : nullptr;
  }

  int32_t* get_second() & {
    return second_ref() ? std::addressof(second) : nullptr;
  }
  int32_t* get_second() && = delete;

  int32_t& set_second(int32_t second_) {
    second = second_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.second = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return second;
  }

  const int64_t* get_third() const& {
    return third_ref() ? std::addressof(third) : nullptr;
  }

  int64_t* get_third() & {
    return third_ref() ? std::addressof(third) : nullptr;
  }
  int64_t* get_third() && = delete;

  int64_t& set_third(int64_t third_) {
    third = third_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.third = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return third;
  }

  bool get_isTrue() const {
    return isTrue;
  }

  bool& set_isTrue(bool isTrue_) {
    isTrue = isTrue_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.isTrue = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return isTrue;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< BasicTypes >;
};

void swap(BasicTypes& a, BasicTypes& b);

template <class Protocol_>
uint32_t BasicTypes::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
