#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from apache.thrift.metadata.types cimport cThriftMetadata
from thrift.python.common cimport (
    cThriftMetadata as __fbthrift_cThriftMetadata,
)

cdef extern from "thrift/compiler/test/fixtures/namespace/gen-py3/hsmodule/metadata.h" :
    cdef cThriftMetadata cGetThriftModuleMetadata "::cpp2::hsmodule_getThriftModuleMetadata"()
