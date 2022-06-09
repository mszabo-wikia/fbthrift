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
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...


class MyStruct(_fbthrift_python_types.Struct):
    myIntField: _typing.Final[int] = ...
    myStringField: _typing.Final[str] = ...
    def __init__(
        self, *,
        myIntField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        myIntField: _typing.Optional[int]=...,
        myStringField: _typing.Optional[str]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str]]]: ...


class MyUnion(_fbthrift_python_types.Union):
    myEnum: _typing.Final[MyEnum] = ...
    myDataItem: _typing.Final[MyStruct] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=...,
        myDataItem: _typing.Optional[MyStruct]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, MyStruct]) -> MyUnion: ...
    value: _typing.Final[_typing.Union[None, MyEnum, MyStruct]]
    type: Type
    def get_type(self) -> Type:...


class _fbthrift_MyService_query_args(_fbthrift_python_types.Struct):
    u: _typing.Final[MyUnion] = ...

    def __init__(
        self, *,
        u: _typing.Optional[MyUnion]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, MyUnion]]]: ...


class _fbthrift_MyService_query_result(_fbthrift_python_types.Struct):
    success: _typing.Final[MyStruct]

    def __init__(
        self, *, success: _typing.Optional[MyStruct] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            MyStruct,
        ]]]: ...
