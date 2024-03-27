/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/RederivedServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_types.h"
#if __has_include("thrift/compiler/test/fixtures/py3/gen-py3cpp/DerivedService.h")
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/DerivedService.h"
#else
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_handlers.h"
#endif

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace py3::simple {
class RederivedService;
class RederivedServiceAsyncProcessor;

class RederivedServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // namespace py3::simple

namespace apache::thrift {
template <>
class ServiceHandler<::py3::simple::RederivedService> : virtual public ::py3::simple::DerivedServiceSvIf {
 public:
  std::string_view getGeneratedName() const override { return "RederivedService"; }

  typedef ::py3::simple::RederivedServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual ::std::int32_t sync_get_seven();
  [[deprecated("Use sync_get_seven instead")]] virtual ::std::int32_t get_seven();
  virtual folly::Future<::std::int32_t> future_get_seven();
  virtual folly::SemiFuture<::std::int32_t> semifuture_get_seven();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<::std::int32_t> co_get_seven();
  virtual folly::coro::Task<::std::int32_t> co_get_seven(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_get_seven(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback);
 private:
  static ::py3::simple::RederivedServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_get_seven{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace py3::simple {
using RederivedServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<RederivedService> instead")]] = ::apache::thrift::ServiceHandler<RederivedService>;
} // namespace py3::simple
namespace py3::simple {
class RederivedServiceSvNull : public ::apache::thrift::ServiceHandler<RederivedService>, virtual public ::apache::thrift::ServiceHandler<::py3::simple::DerivedService> {
 public:
  ::std::int32_t get_seven() override;
};

class RederivedServiceAsyncProcessor : public ::py3::simple::DerivedServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = ::py3::simple::DerivedServiceAsyncProcessor;
 protected:
  ::apache::thrift::ServiceHandler<::py3::simple::RederivedService>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<RederivedServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const RederivedServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const RederivedServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_get_seven(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_get_seven(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_get_seven(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get_seven(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  RederivedServiceAsyncProcessor(::apache::thrift::ServiceHandler<::py3::simple::RederivedService>* iface) :
      ::py3::simple::DerivedServiceAsyncProcessor(iface),
      iface_(iface) {}
  ~RederivedServiceAsyncProcessor() override {}
};

} // namespace py3::simple
