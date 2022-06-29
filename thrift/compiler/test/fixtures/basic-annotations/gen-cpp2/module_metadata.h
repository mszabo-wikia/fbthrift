/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/cpp_metadata.h"

namespace cpp2 {
class MyService;
} // namespace cpp2
namespace cpp2 {
class MyServicePrioParent;
} // namespace cpp2
namespace cpp2 {
class MyServicePrioChild;
} // namespace cpp2
namespace cpp2 {
class GoodService;
} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::cpp2::YourEnum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::cpp2::MyStructNestedAnnotation> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
 private:
  static void unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct);
};
template <>
class StructMetadata<::cpp2::detail::YourUnion> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
 private:
  static void unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct);
};
template <>
class StructMetadata<::cpp2::detail::YourException> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
 private:
  static void unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct);
};
template <>
class StructMetadata<::cpp2::detail::YourStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
 private:
  static void unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct);
};
template <>
class StructMetadata<::cpp2::SecretStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
 private:
  static void unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct);
};
template <>
class ExceptionMetadata<::cpp2::detail::YourException> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_ping(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getRandomData(ThriftMetadata& metadata, ThriftService& context);
  static void gen_hasDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_putDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_lobDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_cppDoNothing(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_ping(ThriftMetadata& metadata, ThriftService& context);
  static void gen_pong(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_pang(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_bar(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
