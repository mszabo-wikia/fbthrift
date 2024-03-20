/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/constants/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Internship>::name = "Internship";
THRIFT_DATA_MEMBER const std::array<std::string_view, 5> TStructDataStorage<::cpp2::Internship>::fields_names = {{
  "weeks"sv,
  "title"sv,
  "employer"sv,
  "compensation"sv,
  "school"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 5> TStructDataStorage<::cpp2::Internship>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 5> TStructDataStorage<::cpp2::Internship>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 5> TStructDataStorage<::cpp2::Internship>::storage_names = {{
  "__fbthrift_field_weeks"sv,
  "__fbthrift_field_title"sv,
  "__fbthrift_field_employer"sv,
  "__fbthrift_field_compensation"sv,
  "__fbthrift_field_school"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 5> TStructDataStorage<::cpp2::Internship>::isset_indexes = {{
  -1,
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Range>::name = "Range";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::Range>::fields_names = {{
  "min"sv,
  "max"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::Range>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::Range>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::Range>::storage_names = {{
  "__fbthrift_field_min"sv,
  "__fbthrift_field_max"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::Range>::isset_indexes = {{
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::struct1>::name = "struct1";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::struct1>::fields_names = {{
  "a"sv,
  "b"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::struct1>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::struct1>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::struct1>::storage_names = {{
  "__fbthrift_field_a"sv,
  "__fbthrift_field_b"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::struct1>::isset_indexes = {{
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::struct2>::name = "struct2";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::struct2>::fields_names = {{
  "a"sv,
  "b"sv,
  "c"sv,
  "d"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::cpp2::struct2>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::struct2>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::struct2>::storage_names = {{
  "__fbthrift_field_a"sv,
  "__fbthrift_field_b"sv,
  "__fbthrift_field_c"sv,
  "__fbthrift_field_d"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::cpp2::struct2>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::struct3>::name = "struct3";
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::struct3>::fields_names = {{
  "a"sv,
  "b"sv,
  "c"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::struct3>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::struct3>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::struct3>::storage_names = {{
  "__fbthrift_field_a"sv,
  "__fbthrift_field_b"sv,
  "__fbthrift_field_c"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::struct3>::isset_indexes = {{
  0,
  1,
  2,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::struct4>::name = "struct4";
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::struct4>::fields_names = {{
  "a"sv,
  "b"sv,
  "c"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::struct4>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::struct4>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_BYTE,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::struct4>::storage_names = {{
  "__fbthrift_field_a"sv,
  "__fbthrift_field_b"sv,
  "__fbthrift_field_c"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::struct4>::isset_indexes = {{
  0,
  1,
  2,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::union1>::name = "union1";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::union1>::fields_names = {{
  "i"sv,
  "d"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::union1>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::union1>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::union1>::storage_names = {{
  "i"sv,
  "d"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::union1>::isset_indexes = {{
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::union2>::name = "union2";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::union2>::fields_names = {{
  "i"sv,
  "d"sv,
  "s"sv,
  "u"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::cpp2::union2>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::union2>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::cpp2::union2>::storage_names = {{
  "i"sv,
  "d"sv,
  "s"sv,
  "u"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::cpp2::union2>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

} // namespace thrift
} // namespace apache