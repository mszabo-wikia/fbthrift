/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/ServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace facebook::thrift::test {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::facebook::thrift::test::StringWithAdapter_7208*, ::apache::thrift::type::adapted<::my::Adapter1, ::apache::thrift::type::string_t>>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::structure, ::facebook::thrift::test::Foo*>> Service_func_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::facebook::thrift::test::MyI32_4873*, ::apache::thrift::type::adapted<::my::Adapter1, ::apache::thrift::type::i32_t>>> Service_func_presult;
} // namespace facebook::thrift::test
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::facebook::thrift::test::Service>::fbthrift_serialize_func(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::facebook::thrift::test::Service_func_pargs args;
  args.get<0>().value = const_cast<::facebook::thrift::test::StringWithAdapter_7208*>(&p_arg1);
  args.get<1>().value = const_cast<::std::string*>(&p_arg2);
  args.get<2>().value = const_cast<::facebook::thrift::test::Foo*>(&p_arg3);
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "func",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::facebook::thrift::test::Service>::fbthrift_send_func(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "func",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "facebook.com/thrift/test/Service");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::facebook::thrift::test::Service>::func(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::func(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto [ctx, header] = funcCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_func(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_arg1, p_arg2, p_arg3);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::fbthrift_serialize_and_send_func(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_func(&writer, rpcOptions, *header, contextStack, p_arg1, p_arg2, p_arg3);
    if (stealRpcOptions) {
      fbthrift_send_func(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_func(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::facebook::thrift::test::Service>::funcCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "Service.func",
      *header);

  return {std::move(ctx), std::move(header)};
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::sync_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::sync_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = funcCtx(&rpcOptions);
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
      fbthrift_serialize_and_send_func(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_arg1, p_arg2, p_arg3);
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
      return recv_func(returnState);
  });
}


folly::Future<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::future_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

folly::SemiFuture<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::semifuture_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

folly::Future<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::future_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::facebook::thrift::test::MyI32_4873>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto ctxAndHeader = funcCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<apache::thrift::FutureCallback<::facebook::thrift::test::MyI32_4873>>(std::move(promise), recv_wrapped_func, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  const auto serializeAndPrepareSend = [&] {
    apache::thrift::SerializedRequest request = apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
      return fbthrift_serialize_func(&writer, rpcOptions, *header, contextStack, p_arg1, p_arg2, p_arg3);
    });
    return [this, request = std::move(request), header = std::move(header), wrappedCallback = std::move(wrappedCallback)](apache::thrift::RpcOptions& rpcOptions) mutable {
      fbthrift_send_func(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
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

folly::SemiFuture<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::semifuture_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_func, channel_);
  auto callback = std::move(callbackAndFuture.first);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::facebook::thrift::test::Service>::header_future_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::facebook::thrift::test::MyI32_4873>>(std::move(promise), recv_wrapped_func, channel_);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::facebook::thrift::test::Service>::header_semifuture_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_func, channel_);
  auto callback = std::move(callbackAndFuture.first);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::func(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  func(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_arg1, p_arg2, p_arg3);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::facebook::thrift::test::Service>::recv_wrapped_func(::facebook::thrift::test::MyI32_4873& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::facebook::thrift::test::Service_func_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::recv_func(::apache::thrift::ClientReceiveState& state) {
  ::facebook::thrift::test::MyI32_4873 _return;
  auto ew = recv_wrapped_func(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::recv_instance_func(::apache::thrift::ClientReceiveState& state) {
  return recv_func(state);
}

folly::exception_wrapper apache::thrift::Client<::facebook::thrift::test::Service>::recv_instance_wrapped_func(::facebook::thrift::test::MyI32_4873& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_func(_return, state);
}


