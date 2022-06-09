#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class FooEx(_fbthrift_python_exceptions.GeneratedError):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class _fbthrift_PubSubStreamingService_returnstream_args(_fbthrift_python_types.Struct):
    i32_from: _typing.Final[int] = ...
    i32_to: _typing.Final[int] = ...

    def __init__(
        self, *,
        i32_from: _typing.Optional[int]=...,
        i32_to: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, int]]]: ...


class _fbthrift_PubSubStreamingService_returnstream_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_PubSubStreamingService_returnstream_result_stream(_fbthrift_python_types._fbthrift_ResponseStreamResult[int]):

    def __init__(
        self, *, success: _typing.Optional[int] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
        ]]]: ...


class _fbthrift_PubSubStreamingService_streamthrows_args(_fbthrift_python_types.Struct):
    foo: _typing.Final[int] = ...

    def __init__(
        self, *,
        foo: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_PubSubStreamingService_streamthrows_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_PubSubStreamingService_streamthrows_result_stream(_fbthrift_python_types._fbthrift_ResponseStreamResult[int]):
    e: _typing.Final[FooEx]

    def __init__(
        self, *, success: _typing.Optional[int] = ..., e: _typing.Optional[FooEx]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
            FooEx,
        ]]]: ...


class _fbthrift_PubSubStreamingService_boththrows_args(_fbthrift_python_types.Struct):
    foo: _typing.Final[int] = ...

    def __init__(
        self, *,
        foo: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_PubSubStreamingService_boththrows_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]
    e: _typing.Final[FooEx]

    def __init__(
        self, *, success: _typing.Optional[None] = ..., e: _typing.Optional[FooEx]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
            FooEx,
        ]]]: ...


class _fbthrift_PubSubStreamingService_boththrows_result_stream(_fbthrift_python_types._fbthrift_ResponseStreamResult[int]):
    e: _typing.Final[FooEx]

    def __init__(
        self, *, success: _typing.Optional[int] = ..., e: _typing.Optional[FooEx]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
            FooEx,
        ]]]: ...


class _fbthrift_PubSubStreamingService_responseandstreamthrows_args(_fbthrift_python_types.Struct):
    foo: _typing.Final[int] = ...

    def __init__(
        self, *,
        foo: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_PubSubStreamingService_responseandstreamthrows_result(_fbthrift_python_types.Struct):
    success: _typing.Final[int]
    e: _typing.Final[FooEx]

    def __init__(
        self, *, success: _typing.Optional[int] = ..., e: _typing.Optional[FooEx]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
            FooEx,
        ]]]: ...


class _fbthrift_PubSubStreamingService_responseandstreamthrows_result_stream(_fbthrift_python_types._fbthrift_ResponseStreamResult[int]):
    e: _typing.Final[FooEx]

    def __init__(
        self, *, success: _typing.Optional[int] = ..., e: _typing.Optional[FooEx]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
            FooEx,
        ]]]: ...


class _fbthrift_PubSubStreamingService_returnstreamFast_args(_fbthrift_python_types.Struct):
    i32_from: _typing.Final[int] = ...
    i32_to: _typing.Final[int] = ...

    def __init__(
        self, *,
        i32_from: _typing.Optional[int]=...,
        i32_to: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, int]]]: ...


class _fbthrift_PubSubStreamingService_returnstreamFast_result(_fbthrift_python_types.Struct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_PubSubStreamingService_returnstreamFast_result_stream(_fbthrift_python_types._fbthrift_ResponseStreamResult[int]):

    def __init__(
        self, *, success: _typing.Optional[int] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
        ]]]: ...
