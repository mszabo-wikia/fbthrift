/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyLeaf.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyLeaf.tcc"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::getProcessor() {
  return std::make_unique<::cpp2::MyLeafAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::MyLeaf>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::MyLeaf>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::MyLeafAsyncProcessor>(getServiceRequestInfoMap().value().get());
}


std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::MyLeafServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::MyLeaf>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::cpp2::MyLeaf>::do_leaf() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("do_leaf");
}

void apache::thrift::ServiceHandler<::cpp2::MyLeaf>::sync_do_leaf() {
  return do_leaf();
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::semifuture_do_leaf() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_do_leaf.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_do_leaf();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::future_do_leaf() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_do_leaf.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_do_leaf(), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::co_do_leaf() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_do_leaf.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyLeaf>::co_do_leaf(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_do_leaf.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_do_leaf();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::MyLeaf>::async_tm_do_leaf(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_do_leaf.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_do_leaf.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_do_leaf(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_do_leaf.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_do_leaf();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_do_leaf();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_do_leaf(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_do_leaf();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_do_leaf();
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


namespace cpp2 {

void MyLeafSvNull::do_leaf() {
  return;
}


const char* MyLeafAsyncProcessor::getServiceName() {
  return "MyLeaf";
}

void MyLeafAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyLeaf>>::gen(response);
}

void MyLeafAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void MyLeafAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const MyLeafAsyncProcessor::ProcessMap& MyLeafAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const MyLeafAsyncProcessor::ProcessMap MyLeafAsyncProcessor::kOwnProcessMap_ {
  {"do_leaf",
    {&MyLeafAsyncProcessor::setUpAndProcess_do_leaf<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyLeafAsyncProcessor::setUpAndProcess_do_leaf<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyLeafAsyncProcessor::executeRequest_do_leaf<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyLeafAsyncProcessor::executeRequest_do_leaf<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& MyLeafServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap MyLeafServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"do_leaf",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyLeaf.do_leaf",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  };
  apache::thrift::ServiceRequestInfoMap parentMap = ::cpp2::MyNodeServiceInfoHolder::staticRequestInfoMap();
  requestInfoMap.insert(std::begin(parentMap), std::end(parentMap));

  return requestInfoMap;
}
} // cpp2
