// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
            )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
            )
    premadeThriftType_module_Company = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("module.Company"),
            )
    premadeThriftType_double = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE.Ptr(),
            )
    premadeThriftType_module_struct1 = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.struct1"),
            )
    premadeThriftType_list_i32 = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_i32),
            )
    premadeThriftType_module_struct2 = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.struct2"),
            )
    premadeThriftType_byte = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE.Ptr(),
            )
    premadeThriftType_module_union1 = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.union1"),
            )
    premadeThriftType_map_string_string = metadata.NewThriftType().SetTMap(
        metadata.NewThriftMapType().
            SetKeyType(premadeThriftType_string).
            SetValueType(premadeThriftType_string),
            )
)

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("module.Internship").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("weeks").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("title").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("employer").
    SetIsOptional(true).
    SetType(premadeThriftType_module_Company),
            metadata.NewThriftField().
    SetId(4).
    SetName("compensation").
    SetIsOptional(true).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(5).
    SetName("school").
    SetIsOptional(true).
    SetType(premadeThriftType_string),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.Range").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("min").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("max").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.struct1").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("a").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("b").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.struct2").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("a").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("b").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("c").
    SetIsOptional(false).
    SetType(premadeThriftType_module_struct1),
            metadata.NewThriftField().
    SetId(4).
    SetName("d").
    SetIsOptional(false).
    SetType(premadeThriftType_list_i32),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.struct3").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("a").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(2).
    SetName("b").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(3).
    SetName("c").
    SetIsOptional(false).
    SetType(premadeThriftType_module_struct2),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.struct4").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("a").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("b").
    SetIsOptional(true).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(3).
    SetName("c").
    SetIsOptional(true).
    SetType(premadeThriftType_byte),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.union1").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("i").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("d").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.union2").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("i").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("d").
    SetIsOptional(false).
    SetType(premadeThriftType_double),
            metadata.NewThriftField().
    SetId(3).
    SetName("s").
    SetIsOptional(false).
    SetType(premadeThriftType_module_struct1),
            metadata.NewThriftField().
    SetId(4).
    SetName("u").
    SetIsOptional(false).
    SetType(premadeThriftType_module_union1),
        },
    ),
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("module.EmptyEnum").
    SetElements(
        map[int32]string{
        },
    ),
    metadata.NewThriftEnum().
    SetName("module.City").
    SetElements(
        map[int32]string{
            0: "NYC",
            1: "MPK",
            2: "SEA",
            3: "LON",
        },
    ),
    metadata.NewThriftEnum().
    SetName("module.Company").
    SetElements(
        map[int32]string{
            0: "FACEBOOK",
            1: "WHATSAPP",
            2: "OCULUS",
            3: "INSTAGRAM",
        },
    ),
}

var serviceMetadatas = []*metadata.ThriftService{
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    includedEnumsMetadatas := []map[string]*metadata.ThriftEnum{
        GetEnumsMetadata(),
    }
    includedStructsMetadatas := []map[string]*metadata.ThriftStruct{
        GetStructsMetadata(),
    }
    includedExceptionsMetadatas := []map[string]*metadata.ThriftException{
        GetExceptionsMetadata(),
    }
    includedServicesMetadatas := []map[string]*metadata.ThriftService{
        GetServicesMetadata(),
    }

	allEnums := make(map[string]*metadata.ThriftEnum)
	allStructs := make(map[string]*metadata.ThriftStruct)
	allExceptions := make(map[string]*metadata.ThriftException)
    allServices := make(map[string]*metadata.ThriftService)

    for _, includedEnumsMetadata := range includedEnumsMetadatas {
        for enumName, thriftEnum := range includedEnumsMetadata {
            allEnums[enumName] = thriftEnum
        }
    }
    for _, includedStructsMetadata := range includedStructsMetadatas {
        for structName, thriftStruct := range includedStructsMetadata {
            allStructs[structName] = thriftStruct
        }
    }
    for _, includedExceptionsMetadata := range includedExceptionsMetadatas {
        for exceptionName, thriftException := range includedExceptionsMetadata {
            allExceptions[exceptionName] = thriftException
        }
    }
    for _, includedServicesMetadata := range includedServicesMetadatas {
        for serviceName, thriftService := range includedServicesMetadata {
            allServices[serviceName] = thriftService
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetStructsMetadata returns Thrift metadata for enums in the current package.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    result := make(map[string]*metadata.ThriftEnum)
    for _, enumMetadata := range enumMetadatas {
        result[enumMetadata.GetName()] = enumMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for structs in the current package.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    result := make(map[string]*metadata.ThriftStruct)
    for _, structMetadata := range structMetadatas {
        result[structMetadata.GetName()] = structMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for exceptions in the current package.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    result := make(map[string]*metadata.ThriftException)
    for _, exceptionMetadata := range exceptionMetadatas {
        result[exceptionMetadata.GetName()] = exceptionMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for services in the current package.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    result := make(map[string]*metadata.ThriftService)
    for _, serviceMetadata := range serviceMetadatas {
        result[serviceMetadata.GetName()] = serviceMetadata
    }
    return result
}
