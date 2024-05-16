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

cimport module0.types as _module0_types
cimport module1.types as _module1_types

cimport module2.types as _module2_types



ctypedef void (*__Struct_FieldsSetterFunc)(__Struct_FieldsSetter, object) except *

cdef class __Struct_FieldsSetter(__StructFieldsSetter):
    cdef _module2_types.cStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __Struct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __Struct_FieldsSetter _fbthrift_create(_module2_types.cStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *


ctypedef void (*__BigStruct_FieldsSetterFunc)(__BigStruct_FieldsSetter, object) except *

cdef class __BigStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module2_types.cBigStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __BigStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __BigStruct_FieldsSetter _fbthrift_create(_module2_types.cBigStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *

