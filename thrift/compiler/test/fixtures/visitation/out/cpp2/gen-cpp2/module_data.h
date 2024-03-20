/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/visitation/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum1> {
  using type = ::test_cpp2::cpp_reflection::enum1;
  static constexpr const std::size_t size = 3;
  static constexpr std::array<type, size> values = {{
      type::field0,
      type::field1,
      type::field2,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "field0"sv,
      "field1"sv,
      "field2"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum2> {
  using type = ::test_cpp2::cpp_reflection::enum2;
  static constexpr const std::size_t size = 3;
  static constexpr std::array<type, size> values = {{
      type::field0_2,
      type::field1_2,
      type::field2_2,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "field0_2"sv,
      "field1_2"sv,
      "field2_2"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum3> {
  using type = ::test_cpp2::cpp_reflection::enum3;
  static constexpr const std::size_t size = 2;
  static constexpr std::array<type, size> values = {{
      type::field0_3,
      type::field1_3,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "field0_3"sv,
      "field1_3"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::enum_with_special_names> {
  using type = ::test_cpp2::cpp_reflection::enum_with_special_names;
  static constexpr const std::size_t size = 28;
  static constexpr std::array<type, size> values = {{
      type::get,
      type::getter,
      type::lists,
      type::maps,
      type::name,
      type::name_to_value,
      type::names,
      type::prefix_tree,
      type::sets,
      type::setter,
      type::str,
      type::strings,
      type::type,
      type::value,
      type::value_to_name,
      type::values,
      type::id,
      type::ids,
      type::descriptor,
      type::descriptors,
      type::key,
      type::keys,
      type::annotation,
      type::annotations,
      type::member,
      type::members,
      type::field,
      type::fields,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "get"sv,
      "getter"sv,
      "lists"sv,
      "maps"sv,
      "name"sv,
      "name_to_value"sv,
      "names"sv,
      "prefix_tree"sv,
      "sets"sv,
      "setter"sv,
      "str"sv,
      "strings"sv,
      "type"sv,
      "value"sv,
      "value_to_name"sv,
      "values"sv,
      "id"sv,
      "ids"sv,
      "descriptor"sv,
      "descriptors"sv,
      "key"sv,
      "keys"sv,
      "annotation"sv,
      "annotations"sv,
      "member"sv,
      "members"sv,
      "field"sv,
      "fields"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union1::Type> {
  using type = ::test_cpp2::cpp_reflection::union1::Type;
  static constexpr const std::size_t size = 4;
  static constexpr std::array<type, size> values = {{
      type::ui,
      type::ud,
      type::us,
      type::ue,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "ui"sv,
      "ud"sv,
      "us"sv,
      "ue"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union2::Type> {
  using type = ::test_cpp2::cpp_reflection::union2::Type;
  static constexpr const std::size_t size = 4;
  static constexpr std::array<type, size> values = {{
      type::ui_2,
      type::ud_2,
      type::us_2,
      type::ue_2,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "ui_2"sv,
      "ud_2"sv,
      "us_2"sv,
      "ue_2"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union3::Type> {
  using type = ::test_cpp2::cpp_reflection::union3::Type;
  static constexpr const std::size_t size = 4;
  static constexpr std::array<type, size> values = {{
      type::ui_3,
      type::ud_3,
      type::us_3,
      type::ue_3,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "ui_3"sv,
      "ud_3"sv,
      "us_3"sv,
      "ue_3"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::unionA::Type> {
  using type = ::test_cpp2::cpp_reflection::unionA::Type;
  static constexpr const std::size_t size = 5;
  static constexpr std::array<type, size> values = {{
      type::i,
      type::d,
      type::s,
      type::e,
      type::a,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "i"sv,
      "d"sv,
      "s"sv,
      "e"sv,
      "a"sv,
  }};
};

template <> struct TEnumDataStorage<::test_cpp2::cpp_reflection::union_with_special_names::Type> {
  using type = ::test_cpp2::cpp_reflection::union_with_special_names::Type;
  static constexpr const std::size_t size = 28;
  static constexpr std::array<type, size> values = {{
      type::get,
      type::getter,
      type::lists,
      type::maps,
      type::name,
      type::name_to_value,
      type::names,
      type::prefix_tree,
      type::sets,
      type::setter,
      type::str,
      type::strings,
      type::type,
      type::value,
      type::value_to_name,
      type::values,
      type::id,
      type::ids,
      type::descriptor,
      type::descriptors,
      type::key,
      type::keys,
      type::annotation,
      type::annotations,
      type::member,
      type::members,
      type::field,
      type::fields,
  }};
  static constexpr std::array<std::string_view, size> names = {{
      "get"sv,
      "getter"sv,
      "lists"sv,
      "maps"sv,
      "name"sv,
      "name_to_value"sv,
      "names"sv,
      "prefix_tree"sv,
      "sets"sv,
      "setter"sv,
      "str"sv,
      "strings"sv,
      "type"sv,
      "value"sv,
      "value_to_name"sv,
      "values"sv,
      "id"sv,
      "ids"sv,
      "descriptor"sv,
      "descriptors"sv,
      "key"sv,
      "keys"sv,
      "annotation"sv,
      "annotations"sv,
      "member"sv,
      "members"sv,
      "field"sv,
      "fields"sv,
  }};
};

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union1> {
  static constexpr const std::size_t fields_size = 4;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union2> {
  static constexpr const std::size_t fields_size = 4;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union3> {
  static constexpr const std::size_t fields_size = 4;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structA> {
  static constexpr const std::size_t fields_size = 2;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::unionA> {
  static constexpr const std::size_t fields_size = 5;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structB> {
  static constexpr const std::size_t fields_size = 2;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::structC> {
  static constexpr const std::size_t fields_size = 30;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct1> {
  static constexpr const std::size_t fields_size = 6;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct2> {
  static constexpr const std::size_t fields_size = 7;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct3> {
  static constexpr const std::size_t fields_size = 18;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct4> {
  static constexpr const std::size_t fields_size = 4;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct5> {
  static constexpr const std::size_t fields_size = 5;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_binary> {
  static constexpr const std::size_t fields_size = 1;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::dep_A_struct> {
  static constexpr const std::size_t fields_size = 3;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::dep_B_struct> {
  static constexpr const std::size_t fields_size = 3;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::annotated> {
  static constexpr const std::size_t fields_size = 1;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::union_with_special_names> {
  static constexpr const std::size_t fields_size = 28;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_special_names> {
  static constexpr const std::size_t fields_size = 28;
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

template <> struct TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_indirections> {
  static constexpr const std::size_t fields_size = 5;
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