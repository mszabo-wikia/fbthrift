/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::YourEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::YourEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

void StructMetadata<::cpp2::MyStructNestedAnnotation>::unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct){
  thriftStruct.fields()[0].unstructured_annotations() = std::map<std::string, std::string>{};
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStructNestedAnnotation>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructNestedAnnotation", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructNestedAnnotation = res.first->second;
  module_MyStructNestedAnnotation.name() = "module.MyStructNestedAnnotation";
  module_MyStructNestedAnnotation.is_union() = false;
  static const EncodedThriftField
  module_MyStructNestedAnnotation_fields[] = {
    {1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStructNestedAnnotation_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructNestedAnnotation.fields()->push_back(std::move(field));
  }
  StructMetadata::unstructured_annotations(module_MyStructNestedAnnotation);
  return res.first->second;
}
void StructMetadata<::cpp2::detail::YourUnion>::unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct){
  (void)thriftStruct;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::detail::YourUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name() = "module.MyUnion";
  module_MyUnion.is_union() = true;
  module_MyUnion.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(StaticCast)")}}).cv_struct_ref());
  return res.first->second;
}
void StructMetadata<::cpp2::detail::YourException>::unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct){
  (void)thriftStruct;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::detail::YourException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyException = res.first->second;
  module_MyException.name() = "module.MyException";
  module_MyException.is_union() = false;
  module_MyException.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(StaticCast)")}}).cv_struct_ref());
  return res.first->second;
}
void StructMetadata<::cpp2::detail::YourStruct>::unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct){
  thriftStruct.fields()[0].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(cpp.name)THRIFT_CODEGEN", R"THRIFT_CODEGEN(majorVer)THRIFT_CODEGEN"},};
  thriftStruct.fields()[1].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(java.swift.name)THRIFT_CODEGEN", R"THRIFT_CODEGEN(_package)THRIFT_CODEGEN"},};
  thriftStruct.fields()[2].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(go.tag)THRIFT_CODEGEN", R"THRIFT_CODEGEN(tag:"somevalue")THRIFT_CODEGEN"},};
  thriftStruct.fields()[3].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(java.swift.name)THRIFT_CODEGEN", R"THRIFT_CODEGEN(class_)THRIFT_CODEGEN"},};
  thriftStruct.fields()[4].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(custom)THRIFT_CODEGEN", R"THRIFT_CODEGEN(test)THRIFT_CODEGEN"},};
  thriftStruct.fields()[5].unstructured_annotations() = std::map<std::string, std::string>{};
  thriftStruct.fields()[6].unstructured_annotations() = std::map<std::string, std::string>{};
  thriftStruct.fields()[7].unstructured_annotations() = std::map<std::string, std::string>{};
  thriftStruct.fields()[8].unstructured_annotations() = std::map<std::string, std::string>{};
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::detail::YourStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const EncodedThriftField
  module_MyStruct_fields[] = {
    {2, "major", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {1, "package", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "annotation_with_quote", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "class_", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "annotation_with_trailing_comma", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "empty_annotations", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "my_enum", false, std::make_unique<Enum<::cpp2::YourEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {8, "cpp_type_annotation", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {9, "my_union", false, std::make_unique<Union<::cpp2::detail::YourUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  StructMetadata::unstructured_annotations(module_MyStruct);
  module_MyStruct.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(StaticCast)")}}).cv_struct_ref());
  return res.first->second;
}
void StructMetadata<::cpp2::SecretStruct>::unstructured_annotations(::apache::thrift::metadata::ThriftStruct& thriftStruct){
  thriftStruct.fields()[0].unstructured_annotations() = std::map<std::string, std::string>{};
  thriftStruct.fields()[1].unstructured_annotations() = std::map<std::string, std::string>{{R"THRIFT_CODEGEN(java.sensitive)THRIFT_CODEGEN", R"THRIFT_CODEGEN(1)THRIFT_CODEGEN"},};
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SecretStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.SecretStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SecretStruct = res.first->second;
  module_SecretStruct.name() = "module.SecretStruct";
  module_SecretStruct.is_union() = false;
  static const EncodedThriftField
  module_SecretStruct_fields[] = {
    {1, "id", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "password", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SecretStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_SecretStruct.fields()->push_back(std::move(field));
  }
  StructMetadata::unstructured_annotations(module_SecretStruct);
  return res.first->second;
}

void ExceptionMetadata<::cpp2::detail::YourException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.MyException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_MyException = res.first->second;
  module_MyException.name() = "module.MyException";
  module_MyException.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(StaticCast)")}}).cv_struct_ref());
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_ping_myExcept_1;
  module_MyService_ping_myExcept_1.id() = 1;
  module_MyService_ping_myExcept_1.name() = "myExcept";
  module_MyService_ping_myExcept_1.is_optional() = false;
  auto module_MyService_ping_myExcept_1_type = std::make_unique<Struct<::cpp2::detail::YourException>>("module.MyException");
  module_MyService_ping_myExcept_1_type->writeAndGenType(*module_MyService_ping_myExcept_1.type(), metadata);
  func.exceptions()->push_back(std::move(module_MyService_ping_myExcept_1));
  ExceptionMetadata<::cpp2::YourException>::gen(metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id() = 1;
  module_MyService_hasDataById_id_1.name() = "id";
  module_MyService_hasDataById_id_1.is_optional() = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(*module_MyService_hasDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_hasDataById_id_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id() = 1;
  module_MyService_getDataById_id_1.name() = "id";
  module_MyService_getDataById_id_1.is_optional() = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(*module_MyService_getDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_getDataById_id_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id() = 1;
  module_MyService_putDataById_id_1.name() = "id";
  module_MyService_putDataById_id_1.is_optional() = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(*module_MyService_putDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id() = 2;
  module_MyService_putDataById_data_2.name() = "data";
  module_MyService_putDataById_data_2.is_optional() = false;
  module_MyService_putDataById_data_2.structured_annotations() = {
      *cvStruct("module.MyStructNestedAnnotation", {{"name", cvString(R"(argument)")}}).cv_struct_ref(),
  };
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(*module_MyService_putDataById_data_2.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_putDataById_data_2));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id() = 1;
  module_MyService_lobDataById_id_1.name() = "id";
  module_MyService_lobDataById_id_1.is_optional() = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(*module_MyService_lobDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id() = 2;
  module_MyService_lobDataById_data_2.name() = "data";
  module_MyService_lobDataById_data_2.is_optional() = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(*module_MyService_lobDataById_data_2.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_lobDataById_data_2));
  func.is_oneway() = true;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_cppDoNothing(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "doNothing";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_lobDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_cppDoNothing,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyService", std::move(module_MyService));
  context.service_name() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::gen_pong(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "pong";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyServicePrioParent;
  module_MyServicePrioParent.name() = "module.MyServicePrioParent";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::gen_ping,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::gen_pong,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyServicePrioParent);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyServicePrioParent", std::move(module_MyServicePrioParent));
  context.service_name() = "module.MyServicePrioParent";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>>::gen_pang(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "pang";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyServicePrioChild;
  module_MyServicePrioChild.name() = "module.MyServicePrioChild";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioChild>>::gen_pang,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyServicePrioChild);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  module_MyServicePrioChild.parent() = "module.MyServicePrioParent";
  ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>>::genRecurse(metadata, services);
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyServicePrioChild", std::move(module_MyServicePrioChild));
  context.service_name() = "module.MyServicePrioChild";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>>::gen_bar(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name() = "bar";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_BadService;
  module_BadService.name() = "module.BadService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::GoodService>>::gen_bar,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_BadService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.BadService", std::move(module_BadService));
  context.service_name() = "module.BadService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
