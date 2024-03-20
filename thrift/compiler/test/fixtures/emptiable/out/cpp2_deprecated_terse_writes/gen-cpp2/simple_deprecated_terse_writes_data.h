/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/emptiable/src/simple_deprecated_terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_deprecated_terse_writes_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::apache::thrift::test::MyEnum> {
  using type = ::apache::thrift::test::MyEnum;
  static constexpr const std::size_t size = 2;
  static constexpr std::array<type, size> values = {{
      type::ME0,
      type::ME1,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "ME0"sv,
      "ME1"sv,
  }};
};

template <> struct TStructDataStorage<::apache::thrift::test::MyStruct> {
  static constexpr const std::size_t fields_size = 0;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::apache::thrift::test::EmptiableStruct> {
  static constexpr const std::size_t fields_size = 14;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::apache::thrift::test::NotEmptiableStruct> {
  static constexpr const std::size_t fields_size = 14;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift