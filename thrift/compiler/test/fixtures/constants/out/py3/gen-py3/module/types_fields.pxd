#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.unordered_map cimport unordered_map as cumap
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from thrift.python.protocol cimport Protocol as __Protocol
from folly.optional cimport cOptional as __cOptional


cimport module.types as _module_types



ctypedef void (*__Internship_FieldsSetterFunc)(__Internship_FieldsSetter, object) except *

cdef class __Internship_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cInternship* _struct_cpp_obj
    cdef cumap[__cstring_view, __Internship_FieldsSetterFunc] _setters

    @staticmethod
    cdef __Internship_FieldsSetter _fbthrift_create(_module_types.cInternship* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *


ctypedef void (*__Range_FieldsSetterFunc)(__Range_FieldsSetter, object) except *

cdef class __Range_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cRange* _struct_cpp_obj
    cdef cumap[__cstring_view, __Range_FieldsSetterFunc] _setters

    @staticmethod
    cdef __Range_FieldsSetter _fbthrift_create(_module_types.cRange* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__struct1_FieldsSetterFunc)(__struct1_FieldsSetter, object) except *

cdef class __struct1_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cstruct1* _struct_cpp_obj
    cdef cumap[__cstring_view, __struct1_FieldsSetterFunc] _setters

    @staticmethod
    cdef __struct1_FieldsSetter _fbthrift_create(_module_types.cstruct1* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__struct2_FieldsSetterFunc)(__struct2_FieldsSetter, object) except *

cdef class __struct2_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cstruct2* _struct_cpp_obj
    cdef cumap[__cstring_view, __struct2_FieldsSetterFunc] _setters

    @staticmethod
    cdef __struct2_FieldsSetter _fbthrift_create(_module_types.cstruct2* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *


ctypedef void (*__struct3_FieldsSetterFunc)(__struct3_FieldsSetter, object) except *

cdef class __struct3_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cstruct3* _struct_cpp_obj
    cdef cumap[__cstring_view, __struct3_FieldsSetterFunc] _setters

    @staticmethod
    cdef __struct3_FieldsSetter _fbthrift_create(_module_types.cstruct3* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *


ctypedef void (*__struct4_FieldsSetterFunc)(__struct4_FieldsSetter, object) except *

cdef class __struct4_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cstruct4* _struct_cpp_obj
    cdef cumap[__cstring_view, __struct4_FieldsSetterFunc] _setters

    @staticmethod
    cdef __struct4_FieldsSetter _fbthrift_create(_module_types.cstruct4* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *

