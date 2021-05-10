/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/CAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> C_f_pargs;
typedef apache::thrift::ThriftPresult<true> C_f_presult;
typedef apache::thrift::ThriftPresult<false> C_numbers_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::cpp2::number*>>
    > C_numbers_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>*>> C_thing_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::Bang>> C_thing_presult;

template <typename Protocol_>
void CAsyncClient::fT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  C_f_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "f";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
}

template <typename Protocol_>
void CAsyncClient::numbersT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback) {

  C_numbers_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "numbers";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
}

template <typename Protocol_>
void CAsyncClient::thingT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {

  C_thing_pargs args;
  args.get<0>().value = &p_a;
  args.get<1>().value = const_cast<::std::string*>(&p_b);
  args.get<2>().value = const_cast<::std::set<::std::int32_t>*>(&p_c);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  static constexpr std::string_view methodName = "thing";
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), apache::thrift::ManagedStringView::from_static(methodName), writer, sizer);
}



void CAsyncClient::f(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  f(rpcOptions, std::move(callback));
}

void CAsyncClient::f(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = fCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  fImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void CAsyncClient::fImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      fT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      fT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> CAsyncClient::fCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "C.f",
      *header);

  return {std::move(ctx), std::move(header)};
}

void CAsyncClient::sync_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_f(rpcOptions);
}

void CAsyncClient::sync_f(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto [ctx, header] = fCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  fImpl(rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_f(returnState);
  });
}


folly::Future<folly::Unit> CAsyncClient::future_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_f(rpcOptions);
}

folly::SemiFuture<folly::Unit> CAsyncClient::semifuture_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_f(rpcOptions);
}

folly::Future<folly::Unit> CAsyncClient::future_f(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_f, channel_);
  f(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<folly::Unit> CAsyncClient::semifuture_f(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_f, channel_);
  auto callback = std::move(callbackAndFuture.first);
  f(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> CAsyncClient::header_future_f(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_f, channel_);
  f(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> CAsyncClient::header_semifuture_f(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_f, channel_);
  auto callback = std::move(callbackAndFuture.first);
  f(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void CAsyncClient::f(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  f(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper CAsyncClient::recv_wrapped_f(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = C_f_presult;
  constexpr auto const fname = "f";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void CAsyncClient::recv_f(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_f(state);
  if (ew) {
    ew.throw_exception();
  }
}

void CAsyncClient::recv_instance_f(::apache::thrift::ClientReceiveState& state) {
  recv_f(state);
}

folly::exception_wrapper CAsyncClient::recv_instance_wrapped_f(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_f(state);
}

void CAsyncClient::numbers(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  numbers(rpcOptions, std::move(callback));
}

void CAsyncClient::numbers(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = numbersCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)),
    rpcOptions.getBufferOptions());
  numbersImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void CAsyncClient::numbersImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      numbersT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      numbersT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> CAsyncClient::numbersCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "C.numbers",
      *header);

  return {std::move(ctx), std::move(header)};
}

apache::thrift::ClientBufferedStream<::cpp2::number> CAsyncClient::sync_numbers() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_numbers(rpcOptions);
}

apache::thrift::ClientBufferedStream<::cpp2::number> CAsyncClient::sync_numbers(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto [ctx, header] = numbersCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getBufferOptions());
  numbersImpl(rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      return recv_numbers(returnState);
  });
}



folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> CAsyncClient::semifuture_numbers() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_numbers(rpcOptions);
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> CAsyncClient::semifuture_numbers(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_numbers, channel_);
  auto callback = std::move(callbackAndFuture.first);
  numbers(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<::cpp2::number>, std::unique_ptr<apache::thrift::transport::THeader>>> CAsyncClient::header_semifuture_numbers(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_numbers, channel_);
  auto callback = std::move(callbackAndFuture.first);
  numbers(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper CAsyncClient::recv_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = C_numbers_presult;
  constexpr auto const fname = "numbers";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

apache::thrift::ClientBufferedStream<::cpp2::number> CAsyncClient::recv_numbers(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ClientBufferedStream<::cpp2::number> _return;
  auto ew = recv_wrapped_numbers(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ClientBufferedStream<::cpp2::number> CAsyncClient::recv_instance_numbers(::apache::thrift::ClientReceiveState& state) {
  return recv_numbers(state);
}

folly::exception_wrapper CAsyncClient::recv_instance_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_numbers(_return, state);
}

void CAsyncClient::thing(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
}

void CAsyncClient::thing(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  auto [ctx, header] = thingCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  thingImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_a, p_b, p_c);
}

void CAsyncClient::thingImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      thingT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_a, p_b, p_c);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      thingT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_a, p_b, p_c);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> CAsyncClient::thingCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "C.thing",
      *header);

  return {std::move(ctx), std::move(header)};
}

void CAsyncClient::sync_thing(::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_thing(rpcOptions, _return, p_a, p_b, p_c);
}

void CAsyncClient::sync_thing(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto [ctx, header] = thingCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  thingImpl(rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_a, p_b, p_c);
  callback.waitUntilDone(evb);

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctx));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_thing(_return, returnState);
  });
}


folly::Future<::std::string> CAsyncClient::future_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_thing(rpcOptions, p_a, p_b, p_c);
}

folly::SemiFuture<::std::string> CAsyncClient::semifuture_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_thing(rpcOptions, p_a, p_b, p_c);
}

folly::Future<::std::string> CAsyncClient::future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  folly::Promise<::std::string> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(promise), recv_wrapped_thing, channel_);
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
  return future;
}

folly::SemiFuture<::std::string> CAsyncClient::semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_thing, channel_);
  auto callback = std::move(callbackAndFuture.first);
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> CAsyncClient::header_future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(promise), recv_wrapped_thing, channel_);
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
  return future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> CAsyncClient::header_semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_thing, channel_);
  auto callback = std::move(callbackAndFuture.first);
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
  return std::move(callbackAndFuture.second);
}

void CAsyncClient::thing(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  thing(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_a, p_b, p_c);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper CAsyncClient::recv_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = C_thing_presult;
  constexpr auto const fname = "thing";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void CAsyncClient::recv_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_thing(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void CAsyncClient::recv_instance_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_thing(_return, state);
}

folly::exception_wrapper CAsyncClient::recv_instance_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_thing(_return, state);
}


} // cpp2
