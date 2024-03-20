#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)


cimport test.fixtures.enums.module.types as _test_fixtures_enums_module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__SomeStruct():
    cdef _test_fixtures_enums_module_types.SomeStruct defaults = _test_fixtures_enums_module_types.SomeStruct._fbthrift_create(
        constant_shared_ptr[_test_fixtures_enums_module_types.cSomeStruct](
            default_inst[_test_fixtures_enums_module_types.cSomeStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="SomeStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="reasonable",
            py_name="reasonable",
            type=_test_fixtures_enums_module_types.Metasyntactic,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.reasonable,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="fine",
            py_name="fine",
            type=_test_fixtures_enums_module_types.Metasyntactic,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.fine,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="questionable",
            py_name="questionable",
            type=_test_fixtures_enums_module_types.Metasyntactic,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.questionable,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="tags",
            py_name="tags",
            type=_test_fixtures_enums_module_types.Set__i32,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.tags,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStruct():
    cdef _test_fixtures_enums_module_types.MyStruct defaults = _test_fixtures_enums_module_types.MyStruct._fbthrift_create(
        constant_shared_ptr[_test_fixtures_enums_module_types.cMyStruct](
            default_inst[_test_fixtures_enums_module_types.cMyStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="me2_3",
            py_name="me2_3",
            type=_test_fixtures_enums_module_types.MyEnum2,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.me2_3,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="me3_n3",
            py_name="me3_n3",
            type=_test_fixtures_enums_module_types.MyEnum3,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.me3_n3,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="me1_t1",
            py_name="me1_t1",
            type=_test_fixtures_enums_module_types.MyEnum1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.me1_t1,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=6,
            name="me1_t2",
            py_name="me1_t2",
            type=_test_fixtures_enums_module_types.MyEnum1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.me1_t2,
            annotations={
            },
        ),
    )
    return spec
cdef __SetSpec get_reflection__Set__i32():
    return __SetSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I32,
     )
