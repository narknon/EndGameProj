// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EndTextResourceAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndTextResourceAPI() {}
// Cross Module References
	ENDTEXTRESOURCE_API UClass* Z_Construct_UClass_UEndTextResourceAPI_NoRegister();
	ENDTEXTRESOURCE_API UClass* Z_Construct_UClass_UEndTextResourceAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EndTextResource();
	ENDTEXTRESOURCE_API UFunction* Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceInfo();
	ENDTEXTRESOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FEndTextResourceInfo();
	ENDTEXTRESOURCE_API UFunction* Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceText();
// End Cross Module References
	void UEndTextResourceAPI::StaticRegisterNativesUEndTextResourceAPI()
	{
		UClass* Class = UEndTextResourceAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextResourceInfo", (Native)&UEndTextResourceAPI::execGetTextResourceInfo },
			{ "GetTextResourceText", (Native)&UEndTextResourceAPI::execGetTextResourceText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceInfo()
	{
		struct EndTextResourceAPI_eventGetTextResourceInfo_Parms
		{
			FString InTextId;
			FString InLanguage;
			FEndTextResourceInfo ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FEndTextResourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLanguage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLanguage = { UE4CodeGen_Private::EPropertyClass::Str, "InLanguage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceInfo_Parms, InLanguage), METADATA_PARAMS(NewProp_InLanguage_MetaData, ARRAY_COUNT(NewProp_InLanguage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTextId = { UE4CodeGen_Private::EPropertyClass::Str, "InTextId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceInfo_Parms, InTextId), METADATA_PARAMS(NewProp_InTextId_MetaData, ARRAY_COUNT(NewProp_InTextId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLanguage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTextId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EndTextResourceAPI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndTextResourceAPI, "GetTextResourceInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EndTextResourceAPI_eventGetTextResourceInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceText()
	{
		struct EndTextResourceAPI_eventGetTextResourceText_Parms
		{
			FString InTextId;
			FString InLanguage;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLanguage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLanguage = { UE4CodeGen_Private::EPropertyClass::Str, "InLanguage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceText_Parms, InLanguage), METADATA_PARAMS(NewProp_InLanguage_MetaData, ARRAY_COUNT(NewProp_InLanguage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTextId = { UE4CodeGen_Private::EPropertyClass::Str, "InTextId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResourceAPI_eventGetTextResourceText_Parms, InTextId), METADATA_PARAMS(NewProp_InTextId_MetaData, ARRAY_COUNT(NewProp_InTextId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLanguage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTextId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EndTextResourceAPI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndTextResourceAPI, "GetTextResourceText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(EndTextResourceAPI_eventGetTextResourceText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndTextResourceAPI_NoRegister()
	{
		return UEndTextResourceAPI::StaticClass();
	}
	UClass* Z_Construct_UClass_UEndTextResourceAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EndTextResource,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceInfo, "GetTextResourceInfo" }, // 3649380994
				{ &Z_Construct_UFunction_UEndTextResourceAPI_GetTextResourceText, "GetTextResourceText" }, // 1631317816
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EndTextResourceAPI.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/EndTextResourceAPI.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEndTextResourceAPI>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEndTextResourceAPI::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndTextResourceAPI, 2290295974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndTextResourceAPI(Z_Construct_UClass_UEndTextResourceAPI, &UEndTextResourceAPI::StaticClass, TEXT("/Script/EndTextResource"), TEXT("UEndTextResourceAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndTextResourceAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
