/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/Raiser.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> Raiser_doBland_pargs;
typedef apache::thrift::ThriftPresult<true> Raiser_doBland_presult;
typedef apache::thrift::ThriftPresult<false> Raiser_doRaise_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::Banal>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Fiery>, apache::thrift::FieldData<3, ::apache::thrift::type_class::structure, ::cpp2::Serious>> Raiser_doRaise_presult;
typedef apache::thrift::ThriftPresult<false> Raiser_get200_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>> Raiser_get200_presult;
typedef apache::thrift::ThriftPresult<false> Raiser_get500_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::Fiery>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Banal>, apache::thrift::FieldData<3, ::apache::thrift::type_class::structure, ::cpp2::Serious>> Raiser_get500_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::setUpAndProcess_doBland(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &RaiserAsyncProcessor::executeRequest_doBland<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::executeRequest_doBland(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::Raiser_doBland_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "Raiser.doBland",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "doBland", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "doBland");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_shared<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_doBland<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_doBland<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_doBland(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse RaiserAsyncProcessor::return_doBland(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::Raiser_doBland_presult result;
  return serializeResponse("doBland", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void RaiserAsyncProcessor::throw_wrapped_doBland(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "doBland");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::setUpAndProcess_doRaise(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &RaiserAsyncProcessor::executeRequest_doRaise<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::executeRequest_doRaise(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::Raiser_doRaise_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "Raiser.doRaise",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "doRaise", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "doRaise");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_shared<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_doRaise<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_doRaise<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_doRaise(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse RaiserAsyncProcessor::return_doRaise(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::Raiser_doRaise_presult result;
  return serializeResponse("doRaise", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void RaiserAsyncProcessor::throw_wrapped_doRaise(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::cpp2::Raiser_doRaise_presult result;
  if (ew.with_exception([&]( ::cpp2::Banal& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Banal>(ew, *reqCtx);
    result.get<0>().ref() = e;
    result.setIsSet(0, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::cpp2::Fiery& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Fiery>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::cpp2::Serious& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Serious>(ew, *reqCtx);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "doRaise");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("doRaise", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "doRaise");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::setUpAndProcess_get200(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &RaiserAsyncProcessor::executeRequest_get200<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::executeRequest_get200(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::Raiser_get200_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "Raiser.get200",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "get200", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "get200");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_shared<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_get200<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_get200<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_get200(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse RaiserAsyncProcessor::return_get200(apache::thrift::ContextStack* ctx, ::std::string const& _return) {
  ProtocolOut_ prot;
  ::cpp2::Raiser_get200_presult result;
  result.get<0>().value = const_cast<::std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("get200", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void RaiserAsyncProcessor::throw_wrapped_get200(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "get200");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::setUpAndProcess_get500(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &RaiserAsyncProcessor::executeRequest_get500<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void RaiserAsyncProcessor::executeRequest_get500(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::Raiser_get500_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "Raiser.get500",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "get500", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "get500");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_shared<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_get500<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_get500<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_get500(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse RaiserAsyncProcessor::return_get500(apache::thrift::ContextStack* ctx, ::std::string const& _return) {
  ProtocolOut_ prot;
  ::cpp2::Raiser_get500_presult result;
  result.get<0>().value = const_cast<::std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("get500", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void RaiserAsyncProcessor::throw_wrapped_get500(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::cpp2::Raiser_get500_presult result;
  if (ew.with_exception([&]( ::cpp2::Fiery& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Fiery>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::cpp2::Banal& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Banal>(ew, *reqCtx);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::cpp2::Serious& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Serious>(ew, *reqCtx);
    result.get<3>().ref() = e;
    result.setIsSet(3, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "get500");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("get500", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "get500");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}


} // namespace cpp2
