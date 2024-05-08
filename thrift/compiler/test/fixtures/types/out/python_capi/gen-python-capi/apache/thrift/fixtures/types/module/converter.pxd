
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h":
    cdef cppclass cempty_struct "::apache::thrift::fixtures::types::empty_struct":
        cempty_struct()
    cdef cppclass cdecorated_struct "::apache::thrift::fixtures::types::decorated_struct":
        cdecorated_struct()
    cdef cppclass cContainerStruct "::apache::thrift::fixtures::types::ContainerStruct":
        cContainerStruct()
    cdef cppclass cCppTypeStruct "::apache::thrift::fixtures::types::CppTypeStruct":
        cCppTypeStruct()
    cdef cppclass cVirtualStruct "::apache::thrift::fixtures::types::VirtualStruct":
        cVirtualStruct()
    cdef cppclass cMyStructWithForwardRefEnum "::apache::thrift::fixtures::types::MyStructWithForwardRefEnum":
        cMyStructWithForwardRefEnum()
    cdef cppclass cTrivialNumeric "::apache::thrift::fixtures::types::TrivialNumeric":
        cTrivialNumeric()
    cdef cppclass cTrivialNestedWithDefault "::apache::thrift::fixtures::types::TrivialNestedWithDefault":
        cTrivialNestedWithDefault()
    cdef cppclass cComplexString "::apache::thrift::fixtures::types::ComplexString":
        cComplexString()
    cdef cppclass cComplexNestedWithDefault "::apache::thrift::fixtures::types::ComplexNestedWithDefault":
        cComplexNestedWithDefault()
    cdef cppclass cMinPadding "::apache::thrift::fixtures::types::MinPadding":
        cMinPadding()
    cdef cppclass cMinPaddingWithCustomType "::apache::thrift::fixtures::types::MinPaddingWithCustomType":
        cMinPaddingWithCustomType()
    cdef cppclass cMyStruct "::apache::thrift::fixtures::types::MyStruct":
        cMyStruct()
    cdef cppclass cMyDataItem "::apache::thrift::fixtures::types::MyDataItem":
        cMyDataItem()
    cdef cppclass cRenaming "::apache::thrift::fixtures::types::Renamed":
        cRenaming()
    cdef cppclass cAnnotatedTypes "::apache::thrift::fixtures::types::AnnotatedTypes":
        cAnnotatedTypes()
    cdef cppclass cForwardUsageRoot "::apache::thrift::fixtures::types::ForwardUsageRoot":
        cForwardUsageRoot()
    cdef cppclass cForwardUsageStruct "::apache::thrift::fixtures::types::ForwardUsageStruct":
        cForwardUsageStruct()
    cdef cppclass cForwardUsageByRef "::apache::thrift::fixtures::types::ForwardUsageByRef":
        cForwardUsageByRef()
    cdef cppclass cIncompleteMap "::apache::thrift::fixtures::types::IncompleteMap":
        cIncompleteMap()
    cdef cppclass cIncompleteMapDep "::apache::thrift::fixtures::types::IncompleteMapDep":
        cIncompleteMapDep()
    cdef cppclass cCompleteMap "::apache::thrift::fixtures::types::CompleteMap":
        cCompleteMap()
    cdef cppclass cCompleteMapDep "::apache::thrift::fixtures::types::CompleteMapDep":
        cCompleteMapDep()
    cdef cppclass cIncompleteList "::apache::thrift::fixtures::types::IncompleteList":
        cIncompleteList()
    cdef cppclass cIncompleteListDep "::apache::thrift::fixtures::types::IncompleteListDep":
        cIncompleteListDep()
    cdef cppclass cCompleteList "::apache::thrift::fixtures::types::CompleteList":
        cCompleteList()
    cdef cppclass cCompleteListDep "::apache::thrift::fixtures::types::CompleteListDep":
        cCompleteListDep()
    cdef cppclass cAdaptedList "::apache::thrift::fixtures::types::AdaptedList":
        cAdaptedList()
    cdef cppclass cAdaptedListDep "::apache::thrift::fixtures::types::detail::AdaptedListDep":
        cAdaptedListDep()
    cdef cppclass cDependentAdaptedList "::apache::thrift::fixtures::types::DependentAdaptedList":
        cDependentAdaptedList()
    cdef cppclass cDependentAdaptedListDep "::apache::thrift::fixtures::types::detail::DependentAdaptedListDep":
        cDependentAdaptedListDep()
    cdef cppclass cAllocatorAware "::apache::thrift::fixtures::types::AllocatorAware":
        cAllocatorAware()
    cdef cppclass cAllocatorAware2 "::apache::thrift::fixtures::types::AllocatorAware2":
        cAllocatorAware2()
    cdef cppclass cTypedefStruct "::apache::thrift::fixtures::types::TypedefStruct":
        cTypedefStruct()
    cdef cppclass cStructWithDoubleUnderscores "::apache::thrift::fixtures::types::StructWithDoubleUnderscores":
        cStructWithDoubleUnderscores()

cdef extern from "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h":
    cdef cppclass chas_bitwise_ops "::apache::thrift::fixtures::types::has_bitwise_ops":
        pass
    cdef cppclass cis_unscoped "::apache::thrift::fixtures::types::is_unscoped":
        pass
    cdef cppclass cMyForwardRefEnum "::apache::thrift::fixtures::types::MyForwardRefEnum":
        pass
cdef cempty_struct empty_struct_convert_to_cpp(object inst) except*
cdef object empty_struct_from_cpp(const cempty_struct& c_struct)

cdef cdecorated_struct decorated_struct_convert_to_cpp(object inst) except*
cdef object decorated_struct_from_cpp(const cdecorated_struct& c_struct)

cdef cContainerStruct ContainerStruct_convert_to_cpp(object inst) except*
cdef object ContainerStruct_from_cpp(const cContainerStruct& c_struct)

cdef cCppTypeStruct CppTypeStruct_convert_to_cpp(object inst) except*
cdef object CppTypeStruct_from_cpp(const cCppTypeStruct& c_struct)

cdef cVirtualStruct VirtualStruct_convert_to_cpp(object inst) except*
cdef object VirtualStruct_from_cpp(const cVirtualStruct& c_struct)

cdef cMyStructWithForwardRefEnum MyStructWithForwardRefEnum_convert_to_cpp(object inst) except*
cdef object MyStructWithForwardRefEnum_from_cpp(const cMyStructWithForwardRefEnum& c_struct)

cdef cTrivialNumeric TrivialNumeric_convert_to_cpp(object inst) except*
cdef object TrivialNumeric_from_cpp(const cTrivialNumeric& c_struct)

cdef cTrivialNestedWithDefault TrivialNestedWithDefault_convert_to_cpp(object inst) except*
cdef object TrivialNestedWithDefault_from_cpp(const cTrivialNestedWithDefault& c_struct)

cdef cComplexString ComplexString_convert_to_cpp(object inst) except*
cdef object ComplexString_from_cpp(const cComplexString& c_struct)

cdef cComplexNestedWithDefault ComplexNestedWithDefault_convert_to_cpp(object inst) except*
cdef object ComplexNestedWithDefault_from_cpp(const cComplexNestedWithDefault& c_struct)

cdef cMinPadding MinPadding_convert_to_cpp(object inst) except*
cdef object MinPadding_from_cpp(const cMinPadding& c_struct)

cdef cMinPaddingWithCustomType MinPaddingWithCustomType_convert_to_cpp(object inst) except*
cdef object MinPaddingWithCustomType_from_cpp(const cMinPaddingWithCustomType& c_struct)

cdef cMyStruct MyStruct_convert_to_cpp(object inst) except*
cdef object MyStruct_from_cpp(const cMyStruct& c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except*
cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct)

cdef cRenaming Renaming_convert_to_cpp(object inst) except*
cdef object Renaming_from_cpp(const cRenaming& c_struct)

cdef cAnnotatedTypes AnnotatedTypes_convert_to_cpp(object inst) except*
cdef object AnnotatedTypes_from_cpp(const cAnnotatedTypes& c_struct)

cdef cForwardUsageRoot ForwardUsageRoot_convert_to_cpp(object inst) except*
cdef object ForwardUsageRoot_from_cpp(const cForwardUsageRoot& c_struct)

cdef cForwardUsageStruct ForwardUsageStruct_convert_to_cpp(object inst) except*
cdef object ForwardUsageStruct_from_cpp(const cForwardUsageStruct& c_struct)

cdef cForwardUsageByRef ForwardUsageByRef_convert_to_cpp(object inst) except*
cdef object ForwardUsageByRef_from_cpp(const cForwardUsageByRef& c_struct)

cdef cIncompleteMap IncompleteMap_convert_to_cpp(object inst) except*
cdef object IncompleteMap_from_cpp(const cIncompleteMap& c_struct)

cdef cIncompleteMapDep IncompleteMapDep_convert_to_cpp(object inst) except*
cdef object IncompleteMapDep_from_cpp(const cIncompleteMapDep& c_struct)

cdef cCompleteMap CompleteMap_convert_to_cpp(object inst) except*
cdef object CompleteMap_from_cpp(const cCompleteMap& c_struct)

cdef cCompleteMapDep CompleteMapDep_convert_to_cpp(object inst) except*
cdef object CompleteMapDep_from_cpp(const cCompleteMapDep& c_struct)

cdef cIncompleteList IncompleteList_convert_to_cpp(object inst) except*
cdef object IncompleteList_from_cpp(const cIncompleteList& c_struct)

cdef cIncompleteListDep IncompleteListDep_convert_to_cpp(object inst) except*
cdef object IncompleteListDep_from_cpp(const cIncompleteListDep& c_struct)

cdef cCompleteList CompleteList_convert_to_cpp(object inst) except*
cdef object CompleteList_from_cpp(const cCompleteList& c_struct)

cdef cCompleteListDep CompleteListDep_convert_to_cpp(object inst) except*
cdef object CompleteListDep_from_cpp(const cCompleteListDep& c_struct)

cdef cAdaptedList AdaptedList_convert_to_cpp(object inst) except*
cdef object AdaptedList_from_cpp(const cAdaptedList& c_struct)

cdef cAdaptedListDep AdaptedListDep_convert_to_cpp(object inst) except*
cdef object AdaptedListDep_from_cpp(const cAdaptedListDep& c_struct)

cdef cDependentAdaptedList DependentAdaptedList_convert_to_cpp(object inst) except*
cdef object DependentAdaptedList_from_cpp(const cDependentAdaptedList& c_struct)

cdef cDependentAdaptedListDep DependentAdaptedListDep_convert_to_cpp(object inst) except*
cdef object DependentAdaptedListDep_from_cpp(const cDependentAdaptedListDep& c_struct)

cdef cAllocatorAware AllocatorAware_convert_to_cpp(object inst) except*
cdef object AllocatorAware_from_cpp(const cAllocatorAware& c_struct)

cdef cAllocatorAware2 AllocatorAware2_convert_to_cpp(object inst) except*
cdef object AllocatorAware2_from_cpp(const cAllocatorAware2& c_struct)

cdef cTypedefStruct TypedefStruct_convert_to_cpp(object inst) except*
cdef object TypedefStruct_from_cpp(const cTypedefStruct& c_struct)

cdef cStructWithDoubleUnderscores StructWithDoubleUnderscores_convert_to_cpp(object inst) except*
cdef object StructWithDoubleUnderscores_from_cpp(const cStructWithDoubleUnderscores& c_struct)
