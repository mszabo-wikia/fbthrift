/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::B>::size;
folly::Range<::cpp2::B const*> const TEnumTraits<::cpp2::B>::values = folly::range(TEnumDataStorage<::cpp2::B>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::B>::names = folly::range(TEnumDataStorage<::cpp2::B>::names);

char const* TEnumTraits<::cpp2::B>::findName(type value) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::B>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_B_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES = _B_EnumMapFactory::makeValuesToNamesMap();
const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES = _B_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::A>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 1;
  static constexpr folly::StringPiece _names[] = {
    "useless_field",
  };
  static constexpr int16_t _ids[] = {
    1,
  };
  static constexpr TType _types[] = {
    TType::T_I32,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
A::A(apache::thrift::FragileConstructor, int32_t useless_field__arg) :
    useless_field(std::move(useless_field__arg)) {
  __isset.useless_field = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void A::__clear() {
  // clear all fields
  useless_field = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool A::operator==(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field == rhs.useless_field)) {
    return false;
  }
  return true;
}

bool A::operator<(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.useless_field == rhs.useless_field)) {
    return lhs.useless_field < rhs.useless_field;
  }
  return false;
}


void swap(A& a, A& b) {
  using ::std::swap;
  swap(a.useless_field, b.useless_field);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
