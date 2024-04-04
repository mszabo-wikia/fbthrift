/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/single_file_service/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/single_file_service/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace cpp2 {

AWrapper::AWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


void AWrapper::async_tm_foo(
  apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::Foo>>::Ptr callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<::cpp2::Foo>>();
        call_cy_A_foo(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<::cpp2::Foo>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::unique_ptr<ASvIf::IIf> AWrapper::createI() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::shared_ptr<apache::thrift::ServerInterface> AInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<AWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> AWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_A_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> AWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_A_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


BWrapper::BWrapper(PyObject *obj, folly::Executor* exc)
  : ::cpp2::AWrapper(obj, exc)
  {
    import_module__services();
  }

void BWrapper::async_tm_bar(
  apache::thrift::HandlerCallback<void>::Ptr callback
    , std::unique_ptr<::cpp2::Foo> foo
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
foo = std::move(foo)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_B_bar(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(foo)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void BWrapper::async_tm_stream_stuff(
  apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>::Ptr callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<apache::thrift::ServerStream<int32_t>>();
        call_cy_B_stream_stuff(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<apache::thrift::ServerStream<int32_t>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> BInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<BWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> BWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_B_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> BWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_B_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


CWrapper::CWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


std::unique_ptr<CSvIf::IIf> CWrapper::createI() {
  throw std::runtime_error("Py3 server doesn't support interactions.");
}
std::shared_ptr<apache::thrift::ServerInterface> CInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<CWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> CWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_C_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> CWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_C_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace cpp2
