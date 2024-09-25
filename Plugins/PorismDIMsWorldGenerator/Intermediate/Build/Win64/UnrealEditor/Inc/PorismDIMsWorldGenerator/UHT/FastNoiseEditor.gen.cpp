// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/FastNoiseEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoiseEditor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseEditor();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseEditor_NoRegister();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNodeLink();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin ScriptStruct FNodeLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeLink;
class UScriptStruct* FNodeLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeLink, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("NodeLink"));
	}
	return Z_Registration_Info_UScriptStruct_NodeLink.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FNodeLink>()
{
	return FNodeLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNodeLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	&NewStructOps,
	"NodeLink",
	nullptr,
	0,
	sizeof(FNodeLink),
	alignof(FNodeLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNodeLink()
{
	if (!Z_Registration_Info_UScriptStruct_NodeLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeLink.InnerSingleton, Z_Construct_UScriptStruct_FNodeLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NodeLink.InnerSingleton;
}
// End ScriptStruct FNodeLink

// Begin Class UFastNoiseEditor Function Add
struct Z_Construct_UFunction_UFastNoiseEditor_Add_Statics
{
	struct FastNoiseEditor_eventAdd_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAdd_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAdd_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAdd_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Add", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::FastNoiseEditor_eventAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::FastNoiseEditor_eventAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execAdd)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Add(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Add

// Begin Class UFastNoiseEditor Function AddDimension
struct Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics
{
	struct FastNoiseEditor_eventAddDimension_Parms
	{
		FNodeLink source;
		FNodeLink newDimensionPosition;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newDimensionPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddDimension_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_newDimensionPosition = { "newDimensionPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddDimension_Parms, newDimensionPosition), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddDimension_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_newDimensionPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "AddDimension", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::FastNoiseEditor_eventAddDimension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::FastNoiseEditor_eventAddDimension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_AddDimension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_AddDimension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execAddDimension)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_STRUCT(FNodeLink,Z_Param_newDimensionPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->AddDimension(Z_Param_Out_source,Z_Param_newDimensionPosition);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function AddDimension

// Begin Class UFastNoiseEditor Function AddFloat
struct Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics
{
	struct FastNoiseEditor_eventAddFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventAddFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "AddFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::FastNoiseEditor_eventAddFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::FastNoiseEditor_eventAddFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_AddFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_AddFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execAddFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->AddFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function AddFloat

// Begin Class UFastNoiseEditor Function CellularDistance
struct Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics
{
	struct FastNoiseEditor_eventCellularDistance_Parms
	{
		FastNoiseDistanceFunction distanceFunction;
		int32 distanceIndex0;
		int32 distanceIndex1;
		FastNoiseReturnType returnType;
		FNodeLink JitterModifier;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "CPP_Default_distanceFunction", "EuclideanSquared" },
		{ "CPP_Default_distanceIndex0", "0" },
		{ "CPP_Default_distanceIndex1", "1" },
		{ "CPP_Default_JitterModifier", "()" },
		{ "CPP_Default_returnType", "Index0" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_distanceIndex0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_distanceIndex1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_returnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_returnType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JitterModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, distanceFunction), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction, METADATA_PARAMS(0, nullptr) }; // 541042881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceIndex0 = { "distanceIndex0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, distanceIndex0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceIndex1 = { "distanceIndex1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, distanceIndex1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_returnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_returnType = { "returnType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, returnType), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType, METADATA_PARAMS(0, nullptr) }; // 1111195746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_JitterModifier = { "JitterModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, JitterModifier), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceIndex0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_distanceIndex1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_returnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_returnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_JitterModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "CellularDistance", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::FastNoiseEditor_eventCellularDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::FastNoiseEditor_eventCellularDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_CellularDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_CellularDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execCellularDistance)
{
	P_GET_ENUM(FastNoiseDistanceFunction,Z_Param_distanceFunction);
	P_GET_PROPERTY(FIntProperty,Z_Param_distanceIndex0);
	P_GET_PROPERTY(FIntProperty,Z_Param_distanceIndex1);
	P_GET_ENUM(FastNoiseReturnType,Z_Param_returnType);
	P_GET_STRUCT(FNodeLink,Z_Param_JitterModifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->CellularDistance(FastNoiseDistanceFunction(Z_Param_distanceFunction),Z_Param_distanceIndex0,Z_Param_distanceIndex1,FastNoiseReturnType(Z_Param_returnType),Z_Param_JitterModifier);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function CellularDistance

// Begin Class UFastNoiseEditor Function CellularLookup
struct Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics
{
	struct FastNoiseEditor_eventCellularLookup_Parms
	{
		FastNoiseDistanceFunction distanceFunction;
		FNodeLink lookup;
		float lookupFrequency;
		FNodeLink JitterModifier;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "CPP_Default_distanceFunction", "EuclideanSquared" },
		{ "CPP_Default_JitterModifier", "()" },
		{ "CPP_Default_lookup", "()" },
		{ "CPP_Default_lookupFrequency", "0.100000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lookupFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JitterModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularLookup_Parms, distanceFunction), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction, METADATA_PARAMS(0, nullptr) }; // 541042881
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_lookup = { "lookup", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularLookup_Parms, lookup), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_lookupFrequency = { "lookupFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularLookup_Parms, lookupFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_JitterModifier = { "JitterModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularLookup_Parms, JitterModifier), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularLookup_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_distanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_distanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_lookup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_lookupFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_JitterModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "CellularLookup", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::FastNoiseEditor_eventCellularLookup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::FastNoiseEditor_eventCellularLookup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_CellularLookup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_CellularLookup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execCellularLookup)
{
	P_GET_ENUM(FastNoiseDistanceFunction,Z_Param_distanceFunction);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lookup);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lookupFrequency);
	P_GET_STRUCT(FNodeLink,Z_Param_JitterModifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->CellularLookup(FastNoiseDistanceFunction(Z_Param_distanceFunction),Z_Param_Out_lookup,Z_Param_lookupFrequency,Z_Param_JitterModifier);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function CellularLookup

// Begin Class UFastNoiseEditor Function CellularValue
struct Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics
{
	struct FastNoiseEditor_eventCellularValue_Parms
	{
		FastNoiseDistanceFunction distanceFunction;
		int32 valueIndex;
		FNodeLink JitterModifier;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "CPP_Default_distanceFunction", "EuclideanSquared" },
		{ "CPP_Default_JitterModifier", "()" },
		{ "CPP_Default_valueIndex", "0" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_valueIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JitterModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularValue_Parms, distanceFunction), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction, METADATA_PARAMS(0, nullptr) }; // 541042881
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_valueIndex = { "valueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularValue_Parms, valueIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_JitterModifier = { "JitterModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularValue_Parms, JitterModifier), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCellularValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_distanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_distanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_valueIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_JitterModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "CellularValue", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::FastNoiseEditor_eventCellularValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::FastNoiseEditor_eventCellularValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_CellularValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_CellularValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execCellularValue)
{
	P_GET_ENUM(FastNoiseDistanceFunction,Z_Param_distanceFunction);
	P_GET_PROPERTY(FIntProperty,Z_Param_valueIndex);
	P_GET_STRUCT(FNodeLink,Z_Param_JitterModifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->CellularValue(FastNoiseDistanceFunction(Z_Param_distanceFunction),Z_Param_valueIndex,Z_Param_JitterModifier);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function CellularValue

// Begin Class UFastNoiseEditor Function Checkerboard
struct Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics
{
	struct FastNoiseEditor_eventCheckerboard_Parms
	{
		float size;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "CPP_Default_size", "1.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCheckerboard_Parms, size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventCheckerboard_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::NewProp_size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Checkerboard", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::FastNoiseEditor_eventCheckerboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::FastNoiseEditor_eventCheckerboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Checkerboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Checkerboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execCheckerboard)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Checkerboard(Z_Param_size);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Checkerboard

// Begin Class UFastNoiseEditor Function Constant
struct Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics
{
	struct FastNoiseEditor_eventConstant_Parms
	{
		float value;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "CPP_Default_value", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventConstant_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventConstant_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Constant", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::FastNoiseEditor_eventConstant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::FastNoiseEditor_eventConstant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Constant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Constant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execConstant)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Constant(Z_Param_value);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Constant

// Begin Class UFastNoiseEditor Function DistanceToPoint
struct Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics
{
	struct FastNoiseEditor_eventDistanceToPoint_Parms
	{
		FastNoiseDistanceFunction distanceFunction;
		FVector point;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "CPP_Default_distanceFunction", "Euclidean" },
		{ "CPP_Default_point", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDistanceToPoint_Parms, distanceFunction), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction, METADATA_PARAMS(0, nullptr) }; // 541042881
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDistanceToPoint_Parms, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDistanceToPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_distanceFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_distanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DistanceToPoint", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::FastNoiseEditor_eventDistanceToPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::FastNoiseEditor_eventDistanceToPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDistanceToPoint)
{
	P_GET_ENUM(FastNoiseDistanceFunction,Z_Param_distanceFunction);
	P_GET_STRUCT(FVector,Z_Param_point);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DistanceToPoint(FastNoiseDistanceFunction(Z_Param_distanceFunction),Z_Param_point);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DistanceToPoint

// Begin Class UFastNoiseEditor Function Divide
struct Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics
{
	struct FastNoiseEditor_eventDivide_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivide_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivide_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivide_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Divide", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::FastNoiseEditor_eventDivide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::FastNoiseEditor_eventDivide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Divide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Divide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDivide)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Divide(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Divide

// Begin Class UFastNoiseEditor Function DivideFloat
struct Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics
{
	struct FastNoiseEditor_eventDivideFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivideFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivideFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDivideFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DivideFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::FastNoiseEditor_eventDivideFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::FastNoiseEditor_eventDivideFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DivideFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DivideFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDivideFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DivideFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DivideFloat

// Begin Class UFastNoiseEditor Function DomainAxisScale
struct Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics
{
	struct FastNoiseEditor_eventDomainAxisScale_Parms
	{
		FNodeLink source;
		FVector scale;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainAxisScale_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainAxisScale_Parms, scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainAxisScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DomainAxisScale", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::FastNoiseEditor_eventDomainAxisScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::FastNoiseEditor_eventDomainAxisScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDomainAxisScale)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_STRUCT(FVector,Z_Param_scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DomainAxisScale(Z_Param_Out_source,Z_Param_scale);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DomainAxisScale

// Begin Class UFastNoiseEditor Function DomainOffset
struct Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics
{
	struct FastNoiseEditor_eventDomainOffset_Parms
	{
		FNodeLink source;
		FNodeLink xOffset;
		FNodeLink yOffset;
		FNodeLink zOffset;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_xOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_yOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_zOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainOffset_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_xOffset = { "xOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainOffset_Parms, xOffset), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_yOffset = { "yOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainOffset_Parms, yOffset), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_zOffset = { "zOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainOffset_Parms, zOffset), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_xOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_yOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_zOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DomainOffset", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::FastNoiseEditor_eventDomainOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::FastNoiseEditor_eventDomainOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DomainOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DomainOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDomainOffset)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_STRUCT(FNodeLink,Z_Param_xOffset);
	P_GET_STRUCT(FNodeLink,Z_Param_yOffset);
	P_GET_STRUCT(FNodeLink,Z_Param_zOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DomainOffset(Z_Param_Out_source,Z_Param_xOffset,Z_Param_yOffset,Z_Param_zOffset);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DomainOffset

// Begin Class UFastNoiseEditor Function DomainRotate
struct Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics
{
	struct FastNoiseEditor_eventDomainRotate_Parms
	{
		FNodeLink source;
		float yaw;
		float pitch;
		float roll;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_pitch", "0.000000" },
		{ "CPP_Default_roll", "0.000000" },
		{ "CPP_Default_yaw", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_roll;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainRotate_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainRotate_Parms, yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainRotate_Parms, pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_roll = { "roll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainRotate_Parms, roll), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainRotate_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DomainRotate", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::FastNoiseEditor_eventDomainRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::FastNoiseEditor_eventDomainRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DomainRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DomainRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDomainRotate)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FFloatProperty,Z_Param_yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_pitch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_roll);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DomainRotate(Z_Param_Out_source,Z_Param_yaw,Z_Param_pitch,Z_Param_roll);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DomainRotate

// Begin Class UFastNoiseEditor Function DomainScale
struct Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics
{
	struct FastNoiseEditor_eventDomainScale_Parms
	{
		FNodeLink source;
		float scale;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainScale_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainScale_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DomainScale", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::FastNoiseEditor_eventDomainScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::FastNoiseEditor_eventDomainScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DomainScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DomainScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDomainScale)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DomainScale(Z_Param_Out_source,Z_Param_scale);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DomainScale

// Begin Class UFastNoiseEditor Function DomainWarpGradient
struct Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics
{
	struct FastNoiseEditor_eventDomainWarpGradient_Parms
	{
		FNodeLink source;
		float warpAmplitude;
		float warpFrequency;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseDomainWarp" },
		{ "CPP_Default_warpAmplitude", "1.000000" },
		{ "CPP_Default_warpFrequency", "0.500000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_warpAmplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_warpFrequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainWarpGradient_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_warpAmplitude = { "warpAmplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainWarpGradient_Parms, warpAmplitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_warpFrequency = { "warpFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainWarpGradient_Parms, warpFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventDomainWarpGradient_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_warpAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_warpFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "DomainWarpGradient", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::FastNoiseEditor_eventDomainWarpGradient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::FastNoiseEditor_eventDomainWarpGradient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execDomainWarpGradient)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FFloatProperty,Z_Param_warpAmplitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_warpFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->DomainWarpGradient(Z_Param_Out_source,Z_Param_warpAmplitude,Z_Param_warpFrequency);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function DomainWarpGradient

// Begin Class UFastNoiseEditor Function Fade
struct Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics
{
	struct FastNoiseEditor_eventFade_Parms
	{
		FNodeLink a;
		FNodeLink b;
		FNodeLink fade;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_b;
	static const UECodeGen_Private::FStructPropertyParams NewProp_fade;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFade_Parms, a), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFade_Parms, b), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_fade = { "fade", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFade_Parms, fade), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFade_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_fade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Fade", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::FastNoiseEditor_eventFade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::FastNoiseEditor_eventFade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Fade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Fade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execFade)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_a);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_b);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_fade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Fade(Z_Param_Out_a,Z_Param_Out_b,Z_Param_Out_fade);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Fade

// Begin Class UFastNoiseEditor Function FadeFloat
struct Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics
{
	struct FastNoiseEditor_eventFadeFloat_Parms
	{
		FNodeLink a;
		FNodeLink b;
		float fade;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_b;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fade;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFadeFloat_Parms, a), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFadeFloat_Parms, b), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_fade = { "fade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFadeFloat_Parms, fade), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFadeFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_fade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "FadeFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::FastNoiseEditor_eventFadeFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::FastNoiseEditor_eventFadeFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_FadeFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_FadeFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execFadeFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_a);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_b);
	P_GET_PROPERTY(FFloatProperty,Z_Param_fade);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->FadeFloat(Z_Param_Out_a,Z_Param_Out_b,Z_Param_fade);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function FadeFloat

// Begin Class UFastNoiseEditor Function FractalFBm
struct Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics
{
	struct FastNoiseEditor_eventFractalFBm_Parms
	{
		FNodeLink domainWarpSource;
		FNodeLink gain;
		FNodeLink weightedStrength;
		int32 octaves;
		float lacunarity;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseFractal" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_octaves", "3" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_domainWarpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weightedStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_domainWarpSource = { "domainWarpSource", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, domainWarpSource), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, gain), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_weightedStrength = { "weightedStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, weightedStrength), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalFBm_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_domainWarpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_weightedStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "FractalFBm", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::FastNoiseEditor_eventFractalFBm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::FastNoiseEditor_eventFractalFBm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_FractalFBm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_FractalFBm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execFractalFBm)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_domainWarpSource);
	P_GET_STRUCT(FNodeLink,Z_Param_gain);
	P_GET_STRUCT(FNodeLink,Z_Param_weightedStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->FractalFBm(Z_Param_Out_domainWarpSource,Z_Param_gain,Z_Param_weightedStrength,Z_Param_octaves,Z_Param_lacunarity);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function FractalFBm

// Begin Class UFastNoiseEditor Function FractalPingPong
struct Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics
{
	struct FastNoiseEditor_eventFractalPingPong_Parms
	{
		FNodeLink domainWarpSource;
		FNodeLink gain;
		FNodeLink weightedStrength;
		FNodeLink pingPongStrength;
		int32 octaves;
		float lacunarity;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseFractal" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_octaves", "3" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_domainWarpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weightedStrength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pingPongStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_domainWarpSource = { "domainWarpSource", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, domainWarpSource), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, gain), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_weightedStrength = { "weightedStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, weightedStrength), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_pingPongStrength = { "pingPongStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, pingPongStrength), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalPingPong_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_domainWarpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_weightedStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_pingPongStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "FractalPingPong", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::FastNoiseEditor_eventFractalPingPong_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::FastNoiseEditor_eventFractalPingPong_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execFractalPingPong)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_domainWarpSource);
	P_GET_STRUCT(FNodeLink,Z_Param_gain);
	P_GET_STRUCT(FNodeLink,Z_Param_weightedStrength);
	P_GET_STRUCT(FNodeLink,Z_Param_pingPongStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->FractalPingPong(Z_Param_Out_domainWarpSource,Z_Param_gain,Z_Param_weightedStrength,Z_Param_pingPongStrength,Z_Param_octaves,Z_Param_lacunarity);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function FractalPingPong

// Begin Class UFastNoiseEditor Function FractalRidged
struct Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics
{
	struct FastNoiseEditor_eventFractalRidged_Parms
	{
		FNodeLink domainWarpSource;
		FNodeLink gain;
		FNodeLink weightedStrength;
		int32 octaves;
		float lacunarity;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseFractal" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_octaves", "3" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_domainWarpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weightedStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_domainWarpSource = { "domainWarpSource", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, domainWarpSource), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, gain), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_weightedStrength = { "weightedStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, weightedStrength), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, octaves), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, lacunarity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventFractalRidged_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_domainWarpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_weightedStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_octaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_lacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "FractalRidged", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::FastNoiseEditor_eventFractalRidged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::FastNoiseEditor_eventFractalRidged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_FractalRidged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_FractalRidged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execFractalRidged)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_domainWarpSource);
	P_GET_STRUCT(FNodeLink,Z_Param_gain);
	P_GET_STRUCT(FNodeLink,Z_Param_weightedStrength);
	P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->FractalRidged(Z_Param_Out_domainWarpSource,Z_Param_gain,Z_Param_weightedStrength,Z_Param_octaves,Z_Param_lacunarity);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function FractalRidged

// Begin Class UFastNoiseEditor Function GeneratorCache
struct Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics
{
	struct FastNoiseEditor_eventGeneratorCache_Parms
	{
		FNodeLink source;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventGeneratorCache_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventGeneratorCache_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "GeneratorCache", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::FastNoiseEditor_eventGeneratorCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::FastNoiseEditor_eventGeneratorCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execGeneratorCache)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->GeneratorCache(Z_Param_Out_source);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function GeneratorCache

// Begin Class UFastNoiseEditor Function GetNoiseRef
struct FastNoiseEditor_eventGetNoiseRef_Parms
{
	UObject* creator;
	FNodeLink ReturnValue;
};
static FName NAME_UFastNoiseEditor_GetNoiseRef = FName(TEXT("GetNoiseRef"));
FNodeLink UFastNoiseEditor::GetNoiseRef(UObject* creator)
{
	FastNoiseEditor_eventGetNoiseRef_Parms Parms;
	Parms.creator=creator;
	ProcessEvent(FindFunctionChecked(NAME_UFastNoiseEditor_GetNoiseRef),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseEditor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09return FString(metadata->SerialiseNodeData(&nodeData).c_str());\n//}\n" },
#endif
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "return FString(metadata->SerialiseNodeData(&nodeData).c_str());\n}" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_creator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::NewProp_creator = { "creator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventGetNoiseRef_Parms, creator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventGetNoiseRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::NewProp_creator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "GetNoiseRef", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::PropPointers), sizeof(FastNoiseEditor_eventGetNoiseRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(FastNoiseEditor_eventGetNoiseRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UFastNoiseEditor Function GetNoiseRef

// Begin Class UFastNoiseEditor Function Max
struct Z_Construct_UFunction_UFastNoiseEditor_Max_Statics
{
	struct FastNoiseEditor_eventMax_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMax_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMax_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMax_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Max", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::FastNoiseEditor_eventMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::FastNoiseEditor_eventMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Max()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Max_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMax)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Max(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Max

// Begin Class UFastNoiseEditor Function MaxFloat
struct Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics
{
	struct FastNoiseEditor_eventMaxFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MaxFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::FastNoiseEditor_eventMaxFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::FastNoiseEditor_eventMaxFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MaxFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MaxFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMaxFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MaxFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MaxFloat

// Begin Class UFastNoiseEditor Function MaxSmooth
struct Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics
{
	struct FastNoiseEditor_eventMaxSmooth_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink smoothness;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_smoothness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmooth_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmooth_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_smoothness = { "smoothness", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmooth_Parms, smoothness), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmooth_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MaxSmooth", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::FastNoiseEditor_eventMaxSmooth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::FastNoiseEditor_eventMaxSmooth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMaxSmooth)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_smoothness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MaxSmooth(Z_Param_Out_lhs,Z_Param_Out_rhs,Z_Param_Out_smoothness);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MaxSmooth

// Begin Class UFastNoiseEditor Function MaxSmoothFloat
struct Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics
{
	struct FastNoiseEditor_eventMaxSmoothFloat_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		float smoothness;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmoothFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmoothFloat_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_smoothness = { "smoothness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmoothFloat_Parms, smoothness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMaxSmoothFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MaxSmoothFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::FastNoiseEditor_eventMaxSmoothFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::FastNoiseEditor_eventMaxSmoothFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMaxSmoothFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_smoothness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MaxSmoothFloat(Z_Param_Out_lhs,Z_Param_Out_rhs,Z_Param_smoothness);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MaxSmoothFloat

// Begin Class UFastNoiseEditor Function Min
struct Z_Construct_UFunction_UFastNoiseEditor_Min_Statics
{
	struct FastNoiseEditor_eventMin_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMin_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMin_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMin_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Min", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::FastNoiseEditor_eventMin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::FastNoiseEditor_eventMin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Min()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Min_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMin)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Min(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Min

// Begin Class UFastNoiseEditor Function MinFloat
struct Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics
{
	struct FastNoiseEditor_eventMinFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MinFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::FastNoiseEditor_eventMinFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::FastNoiseEditor_eventMinFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MinFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MinFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMinFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MinFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MinFloat

// Begin Class UFastNoiseEditor Function MinSmooth
struct Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics
{
	struct FastNoiseEditor_eventMinSmooth_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink smoothness;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_smoothness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmooth_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmooth_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_smoothness = { "smoothness", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmooth_Parms, smoothness), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmooth_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MinSmooth", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::FastNoiseEditor_eventMinSmooth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::FastNoiseEditor_eventMinSmooth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MinSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MinSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMinSmooth)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_smoothness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MinSmooth(Z_Param_Out_lhs,Z_Param_Out_rhs,Z_Param_Out_smoothness);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MinSmooth

// Begin Class UFastNoiseEditor Function MinSmoothFloat
struct Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics
{
	struct FastNoiseEditor_eventMinSmoothFloat_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		float smoothness;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmoothFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmoothFloat_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_smoothness = { "smoothness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmoothFloat_Parms, smoothness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMinSmoothFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MinSmoothFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::FastNoiseEditor_eventMinSmoothFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::FastNoiseEditor_eventMinSmoothFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMinSmoothFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_smoothness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MinSmoothFloat(Z_Param_Out_lhs,Z_Param_Out_rhs,Z_Param_smoothness);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MinSmoothFloat

// Begin Class UFastNoiseEditor Function Multiply
struct Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics
{
	struct FastNoiseEditor_eventMultiply_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiply_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiply_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiply_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Multiply", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::FastNoiseEditor_eventMultiply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::FastNoiseEditor_eventMultiply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Multiply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Multiply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMultiply)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Multiply(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Multiply

// Begin Class UFastNoiseEditor Function MultiplyFloat
struct Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics
{
	struct FastNoiseEditor_eventMultiplyFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiplyFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiplyFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventMultiplyFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "MultiplyFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::FastNoiseEditor_eventMultiplyFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::FastNoiseEditor_eventMultiplyFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execMultiplyFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->MultiplyFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function MultiplyFloat

// Begin Class UFastNoiseEditor Function OpenSimplex2
struct Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics
{
	struct FastNoiseEditor_eventOpenSimplex2_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventOpenSimplex2_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "OpenSimplex2", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::FastNoiseEditor_eventOpenSimplex2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::FastNoiseEditor_eventOpenSimplex2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execOpenSimplex2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->OpenSimplex2();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function OpenSimplex2

// Begin Class UFastNoiseEditor Function OpenSimplex2S
struct Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics
{
	struct FastNoiseEditor_eventOpenSimplex2S_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventOpenSimplex2S_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "OpenSimplex2S", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::FastNoiseEditor_eventOpenSimplex2S_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::FastNoiseEditor_eventOpenSimplex2S_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execOpenSimplex2S)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->OpenSimplex2S();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function OpenSimplex2S

// Begin Class UFastNoiseEditor Function Perlin
struct Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics
{
	struct FastNoiseEditor_eventPerlin_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPerlin_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Perlin", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::FastNoiseEditor_eventPerlin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::FastNoiseEditor_eventPerlin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Perlin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Perlin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execPerlin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Perlin();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Perlin

// Begin Class UFastNoiseEditor Function PositionOutput
struct Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics
{
	struct FastNoiseEditor_eventPositionOutput_Parms
	{
		FVector multiplier;
		FVector offset;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "CPP_Default_multiplier", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_offset", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_multiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPositionOutput_Parms, multiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPositionOutput_Parms, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPositionOutput_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "PositionOutput", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::FastNoiseEditor_eventPositionOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::FastNoiseEditor_eventPositionOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_PositionOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_PositionOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execPositionOutput)
{
	P_GET_STRUCT(FVector,Z_Param_multiplier);
	P_GET_STRUCT(FVector,Z_Param_offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->PositionOutput(Z_Param_multiplier,Z_Param_offset);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function PositionOutput

// Begin Class UFastNoiseEditor Function PowFloat
struct Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics
{
	struct FastNoiseEditor_eventPowFloat_Parms
	{
		FNodeLink value;
		FNodeLink pow;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloat_Parms, value), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_pow = { "pow", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloat_Parms, pow), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_pow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "PowFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::FastNoiseEditor_eventPowFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::FastNoiseEditor_eventPowFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_PowFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_PowFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execPowFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_value);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_pow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->PowFloat(Z_Param_Out_value,Z_Param_Out_pow);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function PowFloat

// Begin Class UFastNoiseEditor Function PowFloatFloat
struct Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics
{
	struct FastNoiseEditor_eventPowFloatFloat_Parms
	{
		FNodeLink value;
		float pow;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloatFloat_Parms, value), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_pow = { "pow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloatFloat_Parms, pow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowFloatFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_pow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "PowFloatFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::FastNoiseEditor_eventPowFloatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::FastNoiseEditor_eventPowFloatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execPowFloatFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_value);
	P_GET_PROPERTY(FFloatProperty,Z_Param_pow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->PowFloatFloat(Z_Param_Out_value,Z_Param_pow);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function PowFloatFloat

// Begin Class UFastNoiseEditor Function PowInt
struct Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics
{
	struct FastNoiseEditor_eventPowInt_Parms
	{
		FNodeLink value;
		int32 pow;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "CPP_Default_pow", "2" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowInt_Parms, value), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_pow = { "pow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowInt_Parms, pow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventPowInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_pow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "PowInt", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::FastNoiseEditor_eventPowInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::FastNoiseEditor_eventPowInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_PowInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_PowInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execPowInt)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_value);
	P_GET_PROPERTY(FIntProperty,Z_Param_pow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->PowInt(Z_Param_Out_value,Z_Param_pow);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function PowInt

// Begin Class UFastNoiseEditor Function Remap
struct Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics
{
	struct FastNoiseEditor_eventRemap_Parms
	{
		FNodeLink source;
		float fromMin;
		float fromMax;
		float toMin;
		float toMax;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_fromMax", "1.000000" },
		{ "CPP_Default_fromMin", "-1.000000" },
		{ "CPP_Default_toMax", "1.000000" },
		{ "CPP_Default_toMin", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fromMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fromMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_toMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_toMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_fromMin = { "fromMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, fromMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_fromMax = { "fromMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, fromMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_toMin = { "toMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, toMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_toMax = { "toMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, toMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemap_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_fromMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_fromMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_toMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_toMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Remap", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::FastNoiseEditor_eventRemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::FastNoiseEditor_eventRemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Remap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Remap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execRemap)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FFloatProperty,Z_Param_fromMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_fromMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_toMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_toMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Remap(Z_Param_Out_source,Z_Param_fromMin,Z_Param_fromMax,Z_Param_toMin,Z_Param_toMax);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Remap

// Begin Class UFastNoiseEditor Function RemoveDimension
struct Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics
{
	struct FastNoiseEditor_eventRemoveDimension_Parms
	{
		FNodeLink source;
		FastNoiseDim removeDimension;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_removeDimension_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_removeDimension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemoveDimension_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_removeDimension_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_removeDimension = { "removeDimension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemoveDimension_Parms, removeDimension), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim, METADATA_PARAMS(0, nullptr) }; // 2453003853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventRemoveDimension_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_removeDimension_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_removeDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "RemoveDimension", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::FastNoiseEditor_eventRemoveDimension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::FastNoiseEditor_eventRemoveDimension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execRemoveDimension)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_ENUM(FastNoiseDim,Z_Param_removeDimension);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->RemoveDimension(Z_Param_Out_source,FastNoiseDim(Z_Param_removeDimension));
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function RemoveDimension

// Begin Class UFastNoiseEditor Function SeedOffset
struct Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics
{
	struct FastNoiseEditor_eventSeedOffset_Parms
	{
		FNodeLink source;
		int32 seedOffset;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_seedOffset", "1" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FIntPropertyParams NewProp_seedOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSeedOffset_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_seedOffset = { "seedOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSeedOffset_Parms, seedOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSeedOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_seedOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "SeedOffset", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::FastNoiseEditor_eventSeedOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::FastNoiseEditor_eventSeedOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_SeedOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_SeedOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execSeedOffset)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FIntProperty,Z_Param_seedOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->SeedOffset(Z_Param_Out_source,Z_Param_seedOffset);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function SeedOffset

// Begin Class UFastNoiseEditor Function Simplex
struct Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics
{
	struct FastNoiseEditor_eventSimplex_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSimplex_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Simplex", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::FastNoiseEditor_eventSimplex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::FastNoiseEditor_eventSimplex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Simplex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Simplex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execSimplex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Simplex();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Simplex

// Begin Class UFastNoiseEditor Function SineWave
struct Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics
{
	struct FastNoiseEditor_eventSineWave_Parms
	{
		float scale;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSineWave_Parms, scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSineWave_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::NewProp_scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "SineWave", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::FastNoiseEditor_eventSineWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::FastNoiseEditor_eventSineWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_SineWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_SineWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execSineWave)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->SineWave(Z_Param_scale);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function SineWave

// Begin Class UFastNoiseEditor Function Subtract
struct Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics
{
	struct FastNoiseEditor_eventSubtract_Parms
	{
		FNodeLink lhs;
		FNodeLink rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtract_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtract_Parms, rhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtract_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Subtract", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::FastNoiseEditor_eventSubtract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::FastNoiseEditor_eventSubtract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Subtract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Subtract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execSubtract)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Subtract(Z_Param_Out_lhs,Z_Param_Out_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Subtract

// Begin Class UFastNoiseEditor Function SubtractFloat
struct Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics
{
	struct FastNoiseEditor_eventSubtractFloat_Parms
	{
		FNodeLink lhs;
		float rhs;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBlends" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lhs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rhs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_lhs = { "lhs", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtractFloat_Parms, lhs), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_rhs = { "rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtractFloat_Parms, rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventSubtractFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "SubtractFloat", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::FastNoiseEditor_eventSubtractFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::FastNoiseEditor_eventSubtractFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execSubtractFloat)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_lhs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->SubtractFloat(Z_Param_Out_lhs,Z_Param_rhs);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function SubtractFloat

// Begin Class UFastNoiseEditor Function Terrace
struct Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics
{
	struct FastNoiseEditor_eventTerrace_Parms
	{
		FNodeLink source;
		float multiplier;
		float smoothness;
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseModifiers" },
		{ "CPP_Default_multiplier", "1.000000" },
		{ "CPP_Default_smoothness", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventTerrace_Parms, source), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventTerrace_Parms, multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_smoothness = { "smoothness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventTerrace_Parms, smoothness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventTerrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Terrace", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::FastNoiseEditor_eventTerrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::FastNoiseEditor_eventTerrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Terrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Terrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execTerrace)
{
	P_GET_STRUCT_REF(FNodeLink,Z_Param_Out_source);
	P_GET_PROPERTY(FFloatProperty,Z_Param_multiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_smoothness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Terrace(Z_Param_Out_source,Z_Param_multiplier,Z_Param_smoothness);
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Terrace

// Begin Class UFastNoiseEditor Function Value
struct Z_Construct_UFunction_UFastNoiseEditor_Value_Statics
{
	struct FastNoiseEditor_eventValue_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseCoherentNoise" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "Value", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::FastNoiseEditor_eventValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::FastNoiseEditor_eventValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_Value()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_Value_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->Value();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function Value

// Begin Class UFastNoiseEditor Function White
struct Z_Construct_UFunction_UFastNoiseEditor_White_Statics
{
	struct FastNoiseEditor_eventWhite_Parms
	{
		FNodeLink ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FastNoiseBasicGenerators" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFastNoiseEditor_White_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastNoiseEditor_eventWhite_Parms, ReturnValue), Z_Construct_UScriptStruct_FNodeLink, METADATA_PARAMS(0, nullptr) }; // 2308022518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseEditor_White_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseEditor_White_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_White_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseEditor_White_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseEditor, nullptr, "White", nullptr, nullptr, Z_Construct_UFunction_UFastNoiseEditor_White_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_White_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFastNoiseEditor_White_Statics::FastNoiseEditor_eventWhite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseEditor_White_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFastNoiseEditor_White_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFastNoiseEditor_White_Statics::FastNoiseEditor_eventWhite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFastNoiseEditor_White()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseEditor_White_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFastNoiseEditor::execWhite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNodeLink*)Z_Param__Result=P_THIS->White();
	P_NATIVE_END;
}
// End Class UFastNoiseEditor Function White

// Begin Class UFastNoiseEditor
void UFastNoiseEditor::StaticRegisterNativesUFastNoiseEditor()
{
	UClass* Class = UFastNoiseEditor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Add", &UFastNoiseEditor::execAdd },
		{ "AddDimension", &UFastNoiseEditor::execAddDimension },
		{ "AddFloat", &UFastNoiseEditor::execAddFloat },
		{ "CellularDistance", &UFastNoiseEditor::execCellularDistance },
		{ "CellularLookup", &UFastNoiseEditor::execCellularLookup },
		{ "CellularValue", &UFastNoiseEditor::execCellularValue },
		{ "Checkerboard", &UFastNoiseEditor::execCheckerboard },
		{ "Constant", &UFastNoiseEditor::execConstant },
		{ "DistanceToPoint", &UFastNoiseEditor::execDistanceToPoint },
		{ "Divide", &UFastNoiseEditor::execDivide },
		{ "DivideFloat", &UFastNoiseEditor::execDivideFloat },
		{ "DomainAxisScale", &UFastNoiseEditor::execDomainAxisScale },
		{ "DomainOffset", &UFastNoiseEditor::execDomainOffset },
		{ "DomainRotate", &UFastNoiseEditor::execDomainRotate },
		{ "DomainScale", &UFastNoiseEditor::execDomainScale },
		{ "DomainWarpGradient", &UFastNoiseEditor::execDomainWarpGradient },
		{ "Fade", &UFastNoiseEditor::execFade },
		{ "FadeFloat", &UFastNoiseEditor::execFadeFloat },
		{ "FractalFBm", &UFastNoiseEditor::execFractalFBm },
		{ "FractalPingPong", &UFastNoiseEditor::execFractalPingPong },
		{ "FractalRidged", &UFastNoiseEditor::execFractalRidged },
		{ "GeneratorCache", &UFastNoiseEditor::execGeneratorCache },
		{ "Max", &UFastNoiseEditor::execMax },
		{ "MaxFloat", &UFastNoiseEditor::execMaxFloat },
		{ "MaxSmooth", &UFastNoiseEditor::execMaxSmooth },
		{ "MaxSmoothFloat", &UFastNoiseEditor::execMaxSmoothFloat },
		{ "Min", &UFastNoiseEditor::execMin },
		{ "MinFloat", &UFastNoiseEditor::execMinFloat },
		{ "MinSmooth", &UFastNoiseEditor::execMinSmooth },
		{ "MinSmoothFloat", &UFastNoiseEditor::execMinSmoothFloat },
		{ "Multiply", &UFastNoiseEditor::execMultiply },
		{ "MultiplyFloat", &UFastNoiseEditor::execMultiplyFloat },
		{ "OpenSimplex2", &UFastNoiseEditor::execOpenSimplex2 },
		{ "OpenSimplex2S", &UFastNoiseEditor::execOpenSimplex2S },
		{ "Perlin", &UFastNoiseEditor::execPerlin },
		{ "PositionOutput", &UFastNoiseEditor::execPositionOutput },
		{ "PowFloat", &UFastNoiseEditor::execPowFloat },
		{ "PowFloatFloat", &UFastNoiseEditor::execPowFloatFloat },
		{ "PowInt", &UFastNoiseEditor::execPowInt },
		{ "Remap", &UFastNoiseEditor::execRemap },
		{ "RemoveDimension", &UFastNoiseEditor::execRemoveDimension },
		{ "SeedOffset", &UFastNoiseEditor::execSeedOffset },
		{ "Simplex", &UFastNoiseEditor::execSimplex },
		{ "SineWave", &UFastNoiseEditor::execSineWave },
		{ "Subtract", &UFastNoiseEditor::execSubtract },
		{ "SubtractFloat", &UFastNoiseEditor::execSubtractFloat },
		{ "Terrace", &UFastNoiseEditor::execTerrace },
		{ "Value", &UFastNoiseEditor::execValue },
		{ "White", &UFastNoiseEditor::execWhite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFastNoiseEditor);
UClass* Z_Construct_UClass_UFastNoiseEditor_NoRegister()
{
	return UFastNoiseEditor::StaticClass();
}
struct Z_Construct_UClass_UFastNoiseEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FastNoiseEditor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FastNoiseEditor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFastNoiseEditor_Add, "Add" }, // 3055420461
		{ &Z_Construct_UFunction_UFastNoiseEditor_AddDimension, "AddDimension" }, // 2381996280
		{ &Z_Construct_UFunction_UFastNoiseEditor_AddFloat, "AddFloat" }, // 349497312
		{ &Z_Construct_UFunction_UFastNoiseEditor_CellularDistance, "CellularDistance" }, // 3644099324
		{ &Z_Construct_UFunction_UFastNoiseEditor_CellularLookup, "CellularLookup" }, // 3567769607
		{ &Z_Construct_UFunction_UFastNoiseEditor_CellularValue, "CellularValue" }, // 4208940539
		{ &Z_Construct_UFunction_UFastNoiseEditor_Checkerboard, "Checkerboard" }, // 4013627760
		{ &Z_Construct_UFunction_UFastNoiseEditor_Constant, "Constant" }, // 2577178570
		{ &Z_Construct_UFunction_UFastNoiseEditor_DistanceToPoint, "DistanceToPoint" }, // 3980843770
		{ &Z_Construct_UFunction_UFastNoiseEditor_Divide, "Divide" }, // 705444817
		{ &Z_Construct_UFunction_UFastNoiseEditor_DivideFloat, "DivideFloat" }, // 949935005
		{ &Z_Construct_UFunction_UFastNoiseEditor_DomainAxisScale, "DomainAxisScale" }, // 2040186543
		{ &Z_Construct_UFunction_UFastNoiseEditor_DomainOffset, "DomainOffset" }, // 1129480332
		{ &Z_Construct_UFunction_UFastNoiseEditor_DomainRotate, "DomainRotate" }, // 1259888497
		{ &Z_Construct_UFunction_UFastNoiseEditor_DomainScale, "DomainScale" }, // 3651784188
		{ &Z_Construct_UFunction_UFastNoiseEditor_DomainWarpGradient, "DomainWarpGradient" }, // 1198237065
		{ &Z_Construct_UFunction_UFastNoiseEditor_Fade, "Fade" }, // 3532832277
		{ &Z_Construct_UFunction_UFastNoiseEditor_FadeFloat, "FadeFloat" }, // 4777880
		{ &Z_Construct_UFunction_UFastNoiseEditor_FractalFBm, "FractalFBm" }, // 1229460100
		{ &Z_Construct_UFunction_UFastNoiseEditor_FractalPingPong, "FractalPingPong" }, // 2575560019
		{ &Z_Construct_UFunction_UFastNoiseEditor_FractalRidged, "FractalRidged" }, // 1992139159
		{ &Z_Construct_UFunction_UFastNoiseEditor_GeneratorCache, "GeneratorCache" }, // 4098446600
		{ &Z_Construct_UFunction_UFastNoiseEditor_GetNoiseRef, "GetNoiseRef" }, // 3357479622
		{ &Z_Construct_UFunction_UFastNoiseEditor_Max, "Max" }, // 3473312266
		{ &Z_Construct_UFunction_UFastNoiseEditor_MaxFloat, "MaxFloat" }, // 671380163
		{ &Z_Construct_UFunction_UFastNoiseEditor_MaxSmooth, "MaxSmooth" }, // 293923371
		{ &Z_Construct_UFunction_UFastNoiseEditor_MaxSmoothFloat, "MaxSmoothFloat" }, // 3642669988
		{ &Z_Construct_UFunction_UFastNoiseEditor_Min, "Min" }, // 1617710583
		{ &Z_Construct_UFunction_UFastNoiseEditor_MinFloat, "MinFloat" }, // 2866868137
		{ &Z_Construct_UFunction_UFastNoiseEditor_MinSmooth, "MinSmooth" }, // 4178471909
		{ &Z_Construct_UFunction_UFastNoiseEditor_MinSmoothFloat, "MinSmoothFloat" }, // 3940001258
		{ &Z_Construct_UFunction_UFastNoiseEditor_Multiply, "Multiply" }, // 240516406
		{ &Z_Construct_UFunction_UFastNoiseEditor_MultiplyFloat, "MultiplyFloat" }, // 55773601
		{ &Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2, "OpenSimplex2" }, // 2404507714
		{ &Z_Construct_UFunction_UFastNoiseEditor_OpenSimplex2S, "OpenSimplex2S" }, // 3271755948
		{ &Z_Construct_UFunction_UFastNoiseEditor_Perlin, "Perlin" }, // 1885575364
		{ &Z_Construct_UFunction_UFastNoiseEditor_PositionOutput, "PositionOutput" }, // 3310454287
		{ &Z_Construct_UFunction_UFastNoiseEditor_PowFloat, "PowFloat" }, // 3102752803
		{ &Z_Construct_UFunction_UFastNoiseEditor_PowFloatFloat, "PowFloatFloat" }, // 757751642
		{ &Z_Construct_UFunction_UFastNoiseEditor_PowInt, "PowInt" }, // 3645151081
		{ &Z_Construct_UFunction_UFastNoiseEditor_Remap, "Remap" }, // 2072909071
		{ &Z_Construct_UFunction_UFastNoiseEditor_RemoveDimension, "RemoveDimension" }, // 1022053808
		{ &Z_Construct_UFunction_UFastNoiseEditor_SeedOffset, "SeedOffset" }, // 3936598334
		{ &Z_Construct_UFunction_UFastNoiseEditor_Simplex, "Simplex" }, // 830652695
		{ &Z_Construct_UFunction_UFastNoiseEditor_SineWave, "SineWave" }, // 2967277811
		{ &Z_Construct_UFunction_UFastNoiseEditor_Subtract, "Subtract" }, // 2520781042
		{ &Z_Construct_UFunction_UFastNoiseEditor_SubtractFloat, "SubtractFloat" }, // 3923257955
		{ &Z_Construct_UFunction_UFastNoiseEditor_Terrace, "Terrace" }, // 2753497314
		{ &Z_Construct_UFunction_UFastNoiseEditor_Value, "Value" }, // 2731452481
		{ &Z_Construct_UFunction_UFastNoiseEditor_White, "White" }, // 2586219531
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFastNoiseEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFastNoiseEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFastNoiseEditor_Statics::ClassParams = {
	&UFastNoiseEditor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UFastNoiseEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFastNoiseEditor()
{
	if (!Z_Registration_Info_UClass_UFastNoiseEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFastNoiseEditor.OuterSingleton, Z_Construct_UClass_UFastNoiseEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFastNoiseEditor.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UFastNoiseEditor>()
{
	return UFastNoiseEditor::StaticClass();
}
UFastNoiseEditor::UFastNoiseEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFastNoiseEditor);
UFastNoiseEditor::~UFastNoiseEditor() {}
// End Class UFastNoiseEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNodeLink::StaticStruct, Z_Construct_UScriptStruct_FNodeLink_Statics::NewStructOps, TEXT("NodeLink"), &Z_Registration_Info_UScriptStruct_NodeLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeLink), 2308022518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFastNoiseEditor, UFastNoiseEditor::StaticClass, TEXT("UFastNoiseEditor"), &Z_Registration_Info_UClass_UFastNoiseEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFastNoiseEditor), 1757925543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_3266771833(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
