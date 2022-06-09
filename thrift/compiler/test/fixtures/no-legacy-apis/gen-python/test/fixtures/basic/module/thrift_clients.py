#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_python_AsyncClient,
    SyncClient as _fbthrift_python_SyncClient,
    Client as _fbthrift_python_Client,
)
import thrift.python.exceptions as _fbthrift_python_exceptions
import thrift.python.types as _fbthrift_python_types
import test.fixtures.basic.module.thrift_types
import test.fixtures.basic.module.thrift_metadata
import facebook.thrift.annotation.thrift.thrift_types


class MyService(_fbthrift_python_Client["MyService.Async", "MyService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_MyService()

    class Async(_fbthrift_python_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.MyService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_MyService()

        async def query(
            self,
            u: test.fixtures.basic.module.thrift_types.MyUnion
        ) -> test.fixtures.basic.module.thrift_types.MyStruct:
            _fbthrift_resp = await self._send_request(
                "MyService",
                "query",
                test.fixtures.basic.module.thrift_types._fbthrift_MyService_query_args(
                    u=u,),
                test.fixtures.basic.module.thrift_types._fbthrift_MyService_query_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

    class Sync(_fbthrift_python_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.MyService"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return test.fixtures.basic.module.thrift_metadata.gen_metadata_service_MyService()

        def query(
            self,
            u: test.fixtures.basic.module.thrift_types.MyUnion
        ) -> test.fixtures.basic.module.thrift_types.MyStruct:
            _fbthrift_resp = self._send_request(
                "MyService",
                "query",
                test.fixtures.basic.module.thrift_types._fbthrift_MyService_query_args(
                    u=u,),
                test.fixtures.basic.module.thrift_types._fbthrift_MyService_query_result,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
