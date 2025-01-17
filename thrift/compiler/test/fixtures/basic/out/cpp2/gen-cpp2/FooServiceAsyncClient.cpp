/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test::fixtures::basic {
typedef apache::thrift::ThriftPresult<false> FooService_simple_rpc_pargs;
typedef apache::thrift::ThriftPresult<true> FooService_simple_rpc_presult;
} // namespace test::fixtures::basic
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::test::fixtures::basic::FooService>::fbthrift_serialize_simple_rpc(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::test::fixtures::basic::FooService_simple_rpc_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "simple_rpc",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::test::fixtures::basic::FooService>::fbthrift_send_simple_rpc(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "simple_rpc",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/fixtures/basic/FooService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  simple_rpc(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = simple_rpcCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_simple_rpc(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::fbthrift_serialize_and_send_simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_simple_rpc(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_simple_rpc(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_simple_rpc(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpcCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "FooService.simple_rpc",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::sync_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_simple_rpc(rpcOptions);
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::sync_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = simple_rpcCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_simple_rpc(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_simple_rpc(returnState);
  });
}


folly::Future<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::future_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_simple_rpc(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::semifuture_simple_rpc() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_simple_rpc(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::future_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto ctxAndHeader = simple_rpcCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_simple_rpc, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  const auto serializeAndPrepareSend = [&] {
    apache::thrift::SerializedRequest request = apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
      return fbthrift_serialize_simple_rpc(&writer, rpcOptions, *header, contextStack);
    });
    return [this, request = std::move(request), header = std::move(header), wrappedCallback = std::move(wrappedCallback)](apache::thrift::RpcOptions& rpcOptions) mutable {
      fbthrift_send_simple_rpc(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    };
  };
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    serializeAndPrepareSend()(rpcOptions);
    return std::move(future).thenValue(CallbackHelper::extractResult);
  }
  return contextStack->processClientInterceptorsOnRequest()
      .semi()
      .defer([future = std::move(future), rpcOptions, send = serializeAndPrepareSend()](folly::Try<void> onRequestResult) mutable {
        onRequestResult.throwUnlessValue();
        send(rpcOptions);
        return std::move(future);
      })
      .deferValue([](CallbackHelper::PromiseResult&& result) {
        apache::thrift::ClientReceiveState clientReceiveState = CallbackHelper::extractClientReceiveState(result);
        auto* contextStack = clientReceiveState.ctx();
        return contextStack->processClientInterceptorsOnResponse()
          .semi()
          .defer([result = std::move(result), keepAlive = std::move(clientReceiveState)](folly::Try<void> onResponseRequest) mutable {
            onResponseRequest.throwUnlessValue();
            return CallbackHelper::extractResult(std::move(result));
          });
      })
      .toUnsafeFuture();
#else
  serializeAndPrepareSend()(rpcOptions);
  return std::move(future).thenValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::test::fixtures::basic::FooService>::semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FooService>::header_future_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_simple_rpc, channel_);
  simple_rpc(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic::FooService>::header_semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_simple_rpc, channel_);
  auto callback = std::move(callbackAndFuture.first);
  simple_rpc(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::simple_rpc(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  simple_rpc(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FooService>::recv_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::fixtures::basic::FooService_simple_rpc_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::recv_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_simple_rpc(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::test::fixtures::basic::FooService>::recv_instance_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  recv_simple_rpc(state);
}

folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic::FooService>::recv_instance_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_simple_rpc(state);
}


