/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ReflectionStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 1;
  static constexpr folly::StringPiece _names[] = {
    "fieldA",
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
ReflectionStruct::ReflectionStruct(apache::thrift::FragileConstructor, int32_t fieldA__arg) :
    fieldA(std::move(fieldA__arg)) {
  __isset.fieldA = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void ReflectionStruct::__clear() {
  // clear all fields
  fieldA = 5;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool ReflectionStruct::operator==(const ReflectionStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return false;
  }
  return true;
}

bool ReflectionStruct::operator<(const ReflectionStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return lhs.fieldA < rhs.fieldA;
  }
  return false;
}


void swap(ReflectionStruct& a, ReflectionStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void ReflectionStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ReflectionStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void ReflectionStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;



} // cpp2
