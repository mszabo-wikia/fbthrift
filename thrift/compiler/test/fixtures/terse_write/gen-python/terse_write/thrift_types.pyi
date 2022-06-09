#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import facebook.thrift.annotation.thrift.thrift_types


class MyEnum(_fbthrift_python_types.Enum, enum.Enum):
    ME0: MyEnum = ...
    ME1: MyEnum = ...


class MyStruct(_fbthrift_python_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class MyStructWithCustomDefault(_fbthrift_python_types.Struct):
    field1: _typing.Final[int] = ...
    def __init__(
        self, *,
        field1: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        field1: _typing.Optional[int]=...
    ) -> MyStructWithCustomDefault: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...


class StructLevelTerseStruct(_fbthrift_python_types.Struct):
    bool_field: _typing.Final[bool] = ...
    byte_field: _typing.Final[int] = ...
    short_field: _typing.Final[int] = ...
    int_field: _typing.Final[int] = ...
    long_field: _typing.Final[int] = ...
    float_field: _typing.Final[float] = ...
    double_field: _typing.Final[float] = ...
    string_field: _typing.Final[str] = ...
    binary_field: _typing.Final[bytes] = ...
    enum_field: _typing.Final[MyEnum] = ...
    list_field: _typing.Final[_typing.Sequence[int]] = ...
    set_field: _typing.Final[_typing.AbstractSet[int]] = ...
    map_field: _typing.Final[_typing.Mapping[int, int]] = ...
    struct_field: _typing.Final[MyStruct] = ...
    def __init__(
        self, *,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStruct]=...
    ) -> None: ...

    def __call__(
        self, *,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStruct]=...
    ) -> StructLevelTerseStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, MyEnum, _typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, int], MyStruct]]]: ...


class FieldLevelTerseStruct(_fbthrift_python_types.Struct):
    terse_bool_field: _typing.Final[bool] = ...
    terse_byte_field: _typing.Final[int] = ...
    terse_short_field: _typing.Final[int] = ...
    terse_int_field: _typing.Final[int] = ...
    terse_long_field: _typing.Final[int] = ...
    terse_float_field: _typing.Final[float] = ...
    terse_double_field: _typing.Final[float] = ...
    terse_string_field: _typing.Final[str] = ...
    terse_binary_field: _typing.Final[bytes] = ...
    terse_enum_field: _typing.Final[MyEnum] = ...
    terse_list_field: _typing.Final[_typing.Sequence[int]] = ...
    terse_set_field: _typing.Final[_typing.AbstractSet[int]] = ...
    terse_map_field: _typing.Final[_typing.Mapping[int, int]] = ...
    terse_struct_field: _typing.Final[MyStruct] = ...
    bool_field: _typing.Final[bool] = ...
    byte_field: _typing.Final[int] = ...
    short_field: _typing.Final[int] = ...
    int_field: _typing.Final[int] = ...
    long_field: _typing.Final[int] = ...
    float_field: _typing.Final[float] = ...
    double_field: _typing.Final[float] = ...
    string_field: _typing.Final[str] = ...
    binary_field: _typing.Final[bytes] = ...
    enum_field: _typing.Final[MyEnum] = ...
    list_field: _typing.Final[_typing.Sequence[int]] = ...
    set_field: _typing.Final[_typing.AbstractSet[int]] = ...
    map_field: _typing.Final[_typing.Mapping[int, int]] = ...
    struct_field: _typing.Final[MyStruct] = ...
    def __init__(
        self, *,
        terse_bool_field: _typing.Optional[bool]=...,
        terse_byte_field: _typing.Optional[int]=...,
        terse_short_field: _typing.Optional[int]=...,
        terse_int_field: _typing.Optional[int]=...,
        terse_long_field: _typing.Optional[int]=...,
        terse_float_field: _typing.Optional[float]=...,
        terse_double_field: _typing.Optional[float]=...,
        terse_string_field: _typing.Optional[str]=...,
        terse_binary_field: _typing.Optional[bytes]=...,
        terse_enum_field: _typing.Optional[MyEnum]=...,
        terse_list_field: _typing.Optional[_typing.Sequence[int]]=...,
        terse_set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        terse_map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        terse_struct_field: _typing.Optional[MyStruct]=...,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStruct]=...
    ) -> None: ...

    def __call__(
        self, *,
        terse_bool_field: _typing.Optional[bool]=...,
        terse_byte_field: _typing.Optional[int]=...,
        terse_short_field: _typing.Optional[int]=...,
        terse_int_field: _typing.Optional[int]=...,
        terse_long_field: _typing.Optional[int]=...,
        terse_float_field: _typing.Optional[float]=...,
        terse_double_field: _typing.Optional[float]=...,
        terse_string_field: _typing.Optional[str]=...,
        terse_binary_field: _typing.Optional[bytes]=...,
        terse_enum_field: _typing.Optional[MyEnum]=...,
        terse_list_field: _typing.Optional[_typing.Sequence[int]]=...,
        terse_set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        terse_map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        terse_struct_field: _typing.Optional[MyStruct]=...,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStruct]=...
    ) -> FieldLevelTerseStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, MyEnum, _typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, int], MyStruct, bool, int, int, int, int, float, float, str, bytes, MyEnum, _typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, int], MyStruct]]]: ...


class TerseStructWithCustomDefault(_fbthrift_python_types.Struct):
    bool_field: _typing.Final[bool] = ...
    byte_field: _typing.Final[int] = ...
    short_field: _typing.Final[int] = ...
    int_field: _typing.Final[int] = ...
    long_field: _typing.Final[int] = ...
    float_field: _typing.Final[float] = ...
    double_field: _typing.Final[float] = ...
    string_field: _typing.Final[str] = ...
    binary_field: _typing.Final[bytes] = ...
    enum_field: _typing.Final[MyEnum] = ...
    list_field: _typing.Final[_typing.Sequence[int]] = ...
    set_field: _typing.Final[_typing.AbstractSet[int]] = ...
    map_field: _typing.Final[_typing.Mapping[int, int]] = ...
    struct_field: _typing.Final[MyStructWithCustomDefault] = ...
    def __init__(
        self, *,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStructWithCustomDefault]=...
    ) -> None: ...

    def __call__(
        self, *,
        bool_field: _typing.Optional[bool]=...,
        byte_field: _typing.Optional[int]=...,
        short_field: _typing.Optional[int]=...,
        int_field: _typing.Optional[int]=...,
        long_field: _typing.Optional[int]=...,
        float_field: _typing.Optional[float]=...,
        double_field: _typing.Optional[float]=...,
        string_field: _typing.Optional[str]=...,
        binary_field: _typing.Optional[bytes]=...,
        enum_field: _typing.Optional[MyEnum]=...,
        list_field: _typing.Optional[_typing.Sequence[int]]=...,
        set_field: _typing.Optional[_typing.AbstractSet[int]]=...,
        map_field: _typing.Optional[_typing.Mapping[int, int]]=...,
        struct_field: _typing.Optional[MyStructWithCustomDefault]=...
    ) -> TerseStructWithCustomDefault: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, MyEnum, _typing.Sequence[int], _typing.AbstractSet[int], _typing.Mapping[int, int], MyStructWithCustomDefault]]]: ...
