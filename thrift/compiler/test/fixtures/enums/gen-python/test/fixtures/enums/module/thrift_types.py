#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.thrift.thrift_types


class SomeStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "reasonable",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: Metasyntactic.FOO,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "fine",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: Metasyntactic.BAR,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "questionable",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(Metasyntactic),  # typeinfo
            lambda: _fbthrift_py3lite_types.BadEnum(Metasyntactic, -1),  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "tags",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_i32),  # typeinfo
            lambda: _fbthrift_python_types.Set(_fbthrift_python_types.typeinfo_i32, ()),  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.SomeStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/enums/SomeStruct"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_SomeStruct()


# This unfortunately has to be down here to prevent circular imports
import test.fixtures.enums.module.thrift_metadata

class Metasyntactic(_fbthrift_python_types.Enum, enum.Enum):
    FOO = 1
    BAR = 2
    BAZ = 3
    BAX = 4
    Unspecified = 0
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Metasyntactic"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.enums.module.thrift_metadata.gen_metadata_enum_Metasyntactic()

def _fbthrift_metadata__struct_SomeStruct():
    return test.fixtures.enums.module.thrift_metadata.gen_metadata_struct_SomeStruct()

_fbthrift_all_structs = [
    SomeStruct,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
