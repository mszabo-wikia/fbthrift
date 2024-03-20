/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace extra { namespace svc {
typedef apache::thrift::ThriftPresult<false> ExtraService_simple_function_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>> ExtraService_simple_function_presult;
typedef apache::thrift::ThriftPresult<false> ExtraService_throws_function_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::some::valid::ns::AnException>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::some::valid::ns::AnotherException>> ExtraService_throws_function_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, bool*>> ExtraService_throws_function2_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::some::valid::ns::AnException>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::some::valid::ns::AnotherException>> ExtraService_throws_function2_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, bool*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::string, ::std::string*>> ExtraService_throws_function3_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>, ::std::map<::std::int32_t, ::std::string>*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::some::valid::ns::AnException>, apache::thrift::FieldData<5, ::apache::thrift::type_class::structure, ::some::valid::ns::AnotherException>> ExtraService_throws_function3_presult;
typedef apache::thrift::ThriftPresult<false> ExtraService_oneway_void_ret_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<4, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<5, ::apache::thrift::type_class::integral, ::std::int32_t*>> ExtraService_oneway_void_ret_i32_i32_i32_i32_i32_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, ::std::int64_t>*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::set<::apache::thrift::type_class::list<::apache::thrift::type_class::string>>, ::std::set<::std::vector<::std::string>>*>> ExtraService_oneway_void_ret_map_setlist_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::some::valid::ns::MyStruct*>> ExtraService_oneway_void_ret_struct_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::variant>, ::std::vector<::some::valid::ns::ComplexUnion>*>> ExtraService_oneway_void_ret_listunion_param_pargs;
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_simple_function<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_simple_function(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_simple_function_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.simple_function",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "simple_function", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "simple_function");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_simple_function<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_simple_function<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_simple_function(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse ExtraServiceAsyncProcessor::return_simple_function(apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  ::extra::svc::ExtraService_simple_function_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("simple_function", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "simple_function");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  apache::thrift::ServerRequest serverRequest{std::move(req), std::move(serializedRequest), ctx, {}, {}, {}, {}};
  executeRequest_throws_function<ProtocolIn_, ProtocolOut_>(std::move(serverRequest));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_throws_function(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_throws_function_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.throws_function",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "throws_function", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "throws_function");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_throws_function<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_throws_function<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , nullptr
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_eb_throws_function(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse ExtraServiceAsyncProcessor::return_throws_function(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::extra::svc::ExtraService_throws_function_presult result;
  return serializeResponse("throws_function", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::extra::svc::ExtraService_throws_function_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnException>(ew, *reqCtx);
    result.get<0>().ref() = e;
    result.setIsSet(0, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnotherException>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("throws_function", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "throws_function");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::HIGH);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_throws_function2<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_throws_function2(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_throws_function2_pargs args;
  bool uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.throws_function2",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "throws_function2", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "throws_function2");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_throws_function2<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_throws_function2<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_throws_function2(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse ExtraServiceAsyncProcessor::return_throws_function2(apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  ::extra::svc::ExtraService_throws_function2_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("throws_function2", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::extra::svc::ExtraService_throws_function2_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnException>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnotherException>(ew, *reqCtx);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function2");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("throws_function2", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "throws_function2");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_throws_function3<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_throws_function3(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_throws_function3_pargs args;
  bool uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  ::std::string uarg_param2;
  args.get<1>().value = &uarg_param2;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.throws_function3",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "throws_function3", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "throws_function3");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::std::map<::std::int32_t, ::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_throws_function3<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_throws_function3<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_throws_function3(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse ExtraServiceAsyncProcessor::return_throws_function3(apache::thrift::ContextStack* ctx, ::std::map<::std::int32_t, ::std::string> const& _return) {
  ProtocolOut_ prot;
  ::extra::svc::ExtraService_throws_function3_presult result;
  result.get<0>().value = const_cast<::std::map<::std::int32_t, ::std::string>*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("throws_function3", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::extra::svc::ExtraService_throws_function3_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnException>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::some::valid::ns::AnotherException>(ew, *reqCtx);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function3");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("throws_function3", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "throws_function3");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_oneway_void_ret_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.oneway_void_ret",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "oneway_void_ret", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    LOG(ERROR) << "exception in function oneway_void_ret: " << folly::exceptionStr(std::current_exception());
    apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)->runInEventBaseThread([req = apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))] {});
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , nullptr
    , nullptr
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_oneway_void_ret(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_i32_i32_i32_i32_i32_param<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_oneway_void_ret_i32_i32_i32_i32_i32_param_pargs args;
  ::std::int32_t uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  ::std::int32_t uarg_param2{0};
  args.get<1>().value = &uarg_param2;
  ::std::int32_t uarg_param3{0};
  args.get<2>().value = &uarg_param3;
  ::std::int32_t uarg_param4{0};
  args.get<3>().value = &uarg_param4;
  ::std::int32_t uarg_param5{0};
  args.get<4>().value = &uarg_param5;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.oneway_void_ret_i32_i32_i32_i32_i32_param",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "oneway_void_ret_i32_i32_i32_i32_i32_param", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    LOG(ERROR) << "exception in function oneway_void_ret_i32_i32_i32_i32_i32_param: " << folly::exceptionStr(std::current_exception());
    apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)->runInEventBaseThread([req = apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))] {});
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , nullptr
    , nullptr
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(std::move(callback), args.get<0>().ref(), args.get<1>().ref(), args.get<2>().ref(), args.get<3>().ref(), args.get<4>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_map_setlist_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, nullptr, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_)) {
    return;
  }
  apache::thrift::ServerRequest serverRequest{std::move(req), std::move(serializedRequest), ctx, {}, {}, {}, {}};
  executeRequest_oneway_void_ret_map_setlist_param<ProtocolIn_, ProtocolOut_>(std::move(serverRequest));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_map_setlist_param(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_oneway_void_ret_map_setlist_param_pargs args;
  ::std::map<::std::string, ::std::int64_t> uarg_param1;
  args.get<0>().value = &uarg_param1;
  ::std::set<::std::vector<::std::string>> uarg_param2;
  args.get<1>().value = &uarg_param2;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.oneway_void_ret_map_setlist_param",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "oneway_void_ret_map_setlist_param", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    LOG(ERROR) << "exception in function oneway_void_ret_map_setlist_param: " << folly::exceptionStr(std::current_exception());
    apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)->runInEventBaseThread([req = apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))] {});
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , nullptr
    , nullptr
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_eb_oneway_void_ret_map_setlist_param(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_struct_param<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_struct_param(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_oneway_void_ret_struct_param_pargs args;
  ::some::valid::ns::MyStruct uarg_param1;
  args.get<0>().value = &uarg_param1;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.oneway_void_ret_struct_param",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "oneway_void_ret_struct_param", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    LOG(ERROR) << "exception in function oneway_void_ret_struct_param: " << folly::exceptionStr(std::current_exception());
    apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)->runInEventBaseThread([req = apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))] {});
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , nullptr
    , nullptr
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_oneway_void_ret_struct_param(std::move(callback), args.get<0>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::setUpAndProcess_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_listunion_param<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::executeRequest_oneway_void_ret_listunion_param(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::extra::svc::ExtraService_oneway_void_ret_listunion_param_pargs args;
  ::std::vector<::some::valid::ns::ComplexUnion> uarg_param1;
  args.get<0>().value = &uarg_param1;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "ExtraService.oneway_void_ret_listunion_param",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "oneway_void_ret_listunion_param", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    LOG(ERROR) << "exception in function oneway_void_ret_listunion_param: " << folly::exceptionStr(std::current_exception());
    apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)->runInEventBaseThread([req = apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))] {});
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , nullptr
    , nullptr
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_oneway_void_ret_listunion_param(std::move(callback), args.get<0>().ref());
}


}} // extra::svc