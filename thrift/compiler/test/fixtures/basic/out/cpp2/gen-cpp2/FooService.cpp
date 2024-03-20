/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooService.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooService.tcc"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::getProcessor() {
  return std::make_unique<::test::fixtures::basic::FooServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::test::fixtures::basic::FooServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}


std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::test::fixtures::basic::FooServiceServiceInfoHolder apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::simple_rpc() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("simple_rpc");
}

void apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::sync_simple_rpc() {
  return simple_rpc();
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::semifuture_simple_rpc() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_simple_rpc();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::future_simple_rpc() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_simple_rpc(), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::co_simple_rpc() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::co_simple_rpc(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_simple_rpc.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_simple_rpc();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>::async_tm_simple_rpc(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_simple_rpc.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_simple_rpc.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_simple_rpc(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_simple_rpc.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_simple_rpc();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_simple_rpc();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_simple_rpc(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_simple_rpc();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_simple_rpc();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie() = std::move(ex).restoreArgs<>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace test { namespace fixtures { namespace basic {

void FooServiceSvNull::simple_rpc() {
  return;
}


const char* FooServiceAsyncProcessor::getServiceName() {
  return "FooService";
}

void FooServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>>::gen(response);
}

void FooServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void FooServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const FooServiceAsyncProcessor::ProcessMap& FooServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const FooServiceAsyncProcessor::ProcessMap FooServiceAsyncProcessor::kOwnProcessMap_ {
  {"simple_rpc",
    {&FooServiceAsyncProcessor::setUpAndProcess_simple_rpc<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &FooServiceAsyncProcessor::setUpAndProcess_simple_rpc<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &FooServiceAsyncProcessor::executeRequest_simple_rpc<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &FooServiceAsyncProcessor::executeRequest_simple_rpc<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& FooServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap FooServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"simple_rpc",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "FooService.simple_rpc",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  };

  return requestInfoMap;
}
}}} // test::fixtures::basic