// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Structs/EndTextResourceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndTextResourceInfo() {}
// Cross Module References
	ENDTEXTRESOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FEndTextResourceInfo();
	UPackage* Z_Construct_UPackage__Script_EndTextResource();
// End Cross Module References
class UScriptStruct* FEndTextResourceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENDTEXTRESOURCE_API uint32 Get_Z_Construct_UScriptStruct_FEndTextResourceInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndTextResourceInfo, Z_Construct_UPackage__Script_EndTextResource(), TEXT("EndTextResourceInfo"), sizeof(FEndTextResourceInfo), Get_Z_Construct_UScriptStruct_FEndTextResourceInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndTextResourceInfo(FEndTextResourceInfo::StaticStruct, TEXT("/Script/EndTextResource"), TEXT("EndTextResourceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EndTextResource_StaticRegisterNativesFEndTextResourceInfo
{
	FScriptStruct_EndTextResource_StaticRegisterNativesFEndTextResourceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EndTextResourceInfo")),new UScriptStruct::TCppStructOps<FEndTextResourceInfo>);
	}
} ScriptStruct_EndTextResource_StaticRegisterNativesFEndTextResourceInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FEndTextResourceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndTextResourceInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EndTextResource();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndTextResourceInfo"), sizeof(FEndTextResourceInfo), Get_Z_Construct_UScriptStruct_FEndTextResourceInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Structs/EndTextResourceInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndTextResourceInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "EndTextResourceInfo" },
				{ "ModuleRelativePath", "Public/Structs/EndTextResourceInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEndTextResourceInfo, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EndTextResource,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EndTextResourceInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEndTextResourceInfo),
				alignof(FEndTextResourceInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndTextResourceInfo_CRC() { return 1664975363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif