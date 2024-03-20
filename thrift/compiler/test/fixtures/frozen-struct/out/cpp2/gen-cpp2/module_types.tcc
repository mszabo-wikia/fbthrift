/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/frozen-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::some::ns::ModuleA> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::some::ns::ModuleB> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::some::ns::detail::DirectlyAdapted> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::some::ns::CppRef> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

template <class Protocol_>
void ModuleA::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_i32Field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_i32Field, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _advance_failure;
  }
_readField_strField:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_strField, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_LIST))) {
    goto _advance_failure;
  }
_readField_listField:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_listField = ::std::vector<::std::int16_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::readWithContext(*iprot, this->__fbthrift_field_listField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_MAP))) {
    goto _advance_failure;
  }
_readField_mapField:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_mapField = ::std::map<::std::string, ::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, ::std::int32_t>>::readWithContext(*iprot, this->__fbthrift_field_mapField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_inclAField:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedA>::readWithContext(*iprot, this->__fbthrift_field_inclAField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(4, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_inclBField:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedB>::readWithContext(*iprot, this->__fbthrift_field_inclBField, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(5, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<ModuleA>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_i32Field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_strField;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_listField;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_mapField;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_inclAField;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_inclBField;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t ModuleA::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_strField);
  }
  {
    xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_listField);
  }
  {
    xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, ::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_mapField);
  }
  {
    xfer += prot_->serializedFieldSize("inclAField", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedA>::serializedSize<false>(*prot_, this->__fbthrift_field_inclAField);
  }
  {
    xfer += prot_->serializedFieldSize("inclBField", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedB>::serializedSize<false>(*prot_, this->__fbthrift_field_inclBField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_strField);
  }
  {
    xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_listField);
  }
  {
    xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, ::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_mapField);
  }
  {
    xfer += prot_->serializedFieldSize("inclAField", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedA>::serializedSize<true>(*prot_, this->__fbthrift_field_inclAField);
  }
  {
    xfer += prot_->serializedFieldSize("inclBField", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedB>::serializedSize<true>(*prot_, this->__fbthrift_field_inclBField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleA");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "i32Field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_i32Field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "strField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_strField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_LIST, 3, kPrevFieldId>(*prot_, "listField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::write(*prot_, this->__fbthrift_field_listField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_MAP, 4, kPrevFieldId>(*prot_, "mapField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, ::std::int32_t>>::write(*prot_, this->__fbthrift_field_mapField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 5, kPrevFieldId>(*prot_, "inclAField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedA>::write(*prot_, this->__fbthrift_field_inclAField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 6, kPrevFieldId>(*prot_, "inclBField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::some::ns::IncludedB>::write(*prot_, this->__fbthrift_field_inclBField);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void ModuleB::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_i32Field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_i32Field, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_inclEnumB:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::some::ns::EnumB>::readWithContext(*iprot, this->__fbthrift_field_inclEnumB, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<ModuleB>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_i32Field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_inclEnumB;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t ModuleB::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("inclEnumB", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::some::ns::EnumB>::serializedSize<false>(*prot_, this->__fbthrift_field_inclEnumB);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("inclEnumB", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::some::ns::EnumB>::serializedSize<false>(*prot_, this->__fbthrift_field_inclEnumB);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleB");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "i32Field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_i32Field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "inclEnumB", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::some::ns::EnumB>::write(*prot_, this->__fbthrift_field_inclEnumB);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

namespace detail {

template <class Protocol_>
void DirectlyAdapted::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<DirectlyAdapted>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t DirectlyAdapted::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DirectlyAdapted");
  {
    xfer += prot_->serializedFieldSize("field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DirectlyAdapted::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DirectlyAdapted");
  {
    xfer += prot_->serializedFieldSize("field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DirectlyAdapted::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("DirectlyAdapted");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void DirectlyAdapted::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t DirectlyAdapted::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t DirectlyAdapted::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t DirectlyAdapted::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void DirectlyAdapted::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t DirectlyAdapted::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t DirectlyAdapted::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t DirectlyAdapted::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
} // namespace detail


template <class Protocol_>
void CppRef::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_shared_field:
  {
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<::std::int32_t>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, *ptr, _readState);
    this->__fbthrift_field_shared_field = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_shared_const_field:
  {
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<const ::std::int32_t>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, *ptr, _readState);
    this->__fbthrift_field_shared_const_field = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_opt_shared_field:
  {
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<::std::int32_t>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, *ptr, _readState);
    this->__fbthrift_field_opt_shared_field = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_opt_shared_const_field:
  {
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<const ::std::int32_t>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, *ptr, _readState);
    this->__fbthrift_field_opt_shared_const_field = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_boxed_field:
  {
    auto ptr = ::apache::thrift::detail::make_mutable_smart_ptr<::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, *ptr, _readState);
    this->__fbthrift_field_boxed_field = std::move(ptr);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<CppRef>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_shared_field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_shared_const_field;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_opt_shared_field;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_opt_shared_const_field;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_boxed_field;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t CppRef::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("CppRef");
  {
    xfer += prot_->serializedFieldSize("shared_field", apache::thrift::protocol::T_I32, 1);
    if (this->__fbthrift_field_shared_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_shared_field);
    }
  }
  {
    xfer += prot_->serializedFieldSize("shared_const_field", apache::thrift::protocol::T_I32, 2);
    if (this->__fbthrift_field_shared_const_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_shared_const_field);
    }
  }
  if (this->__fbthrift_field_opt_shared_field) {
    xfer += prot_->serializedFieldSize("opt_shared_field", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_opt_shared_field);
  }
  if (this->__fbthrift_field_opt_shared_const_field) {
    xfer += prot_->serializedFieldSize("opt_shared_const_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_opt_shared_const_field);
  }
  if (this->__fbthrift_field_boxed_field) {
    xfer += prot_->serializedFieldSize("boxed_field", apache::thrift::protocol::T_I32, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_boxed_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t CppRef::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("CppRef");
  {
    xfer += prot_->serializedFieldSize("shared_field", apache::thrift::protocol::T_I32, 1);
    if (this->__fbthrift_field_shared_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_shared_field);
    }
  }
  {
    xfer += prot_->serializedFieldSize("shared_const_field", apache::thrift::protocol::T_I32, 2);
    if (this->__fbthrift_field_shared_const_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_shared_const_field);
    }
  }
  if (this->__fbthrift_field_opt_shared_field) {
    xfer += prot_->serializedFieldSize("opt_shared_field", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_opt_shared_field);
  }
  if (this->__fbthrift_field_opt_shared_const_field) {
    xfer += prot_->serializedFieldSize("opt_shared_const_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_opt_shared_const_field);
  }
  if (this->__fbthrift_field_boxed_field) {
    xfer += prot_->serializedFieldSize("boxed_field", apache::thrift::protocol::T_I32, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, *this->__fbthrift_field_boxed_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t CppRef::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("CppRef");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "shared_field", previousFieldHasValue);
    previousFieldHasValue = true;
    if (this->__fbthrift_field_shared_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, *this->__fbthrift_field_shared_field);
    }
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "shared_const_field", previousFieldHasValue);
    previousFieldHasValue = true;
    if (this->__fbthrift_field_shared_const_field) {
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, *this->__fbthrift_field_shared_const_field);
    }
    xfer += prot_->writeFieldEnd();
  }
  if (this->__fbthrift_field_opt_shared_field) {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "opt_shared_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, *this->__fbthrift_field_opt_shared_field);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  if (this->__fbthrift_field_opt_shared_const_field) {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 4, kPrevFieldId>(*prot_, "opt_shared_const_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, *this->__fbthrift_field_opt_shared_const_field);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  if (this->__fbthrift_field_boxed_field) {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 5, kPrevFieldId>(*prot_, "boxed_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, *this->__fbthrift_field_boxed_field);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void CppRef::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t CppRef::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t CppRef::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t CppRef::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void CppRef::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t CppRef::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t CppRef::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t CppRef::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}} // some::ns