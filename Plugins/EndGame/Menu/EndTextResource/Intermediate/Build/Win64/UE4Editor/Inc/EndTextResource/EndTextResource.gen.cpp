// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EndTextResource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndTextResource() {}
// Cross Module References
	ENDTEXTRESOURCE_API UClass* Z_Construct_UClass_UEndTextResource_NoRegister();
	ENDTEXTRESOURCE_API UClass* Z_Construct_UClass_UEndTextResource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EndTextResource();
	ENDTEXTRESOURCE_API UFunction* Z_Construct_UFunction_UEndTextResource_GetText();
	ENDTEXTRESOURCE_API UFunction* Z_Construct_UFunction_UEndTextResource_GetTextInfo();
	ENDTEXTRESOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FEndTextResourceInfo();
// End Cross Module References
	void UEndTextResource::StaticRegisterNativesUEndTextResource()
	{
		UClass* Class = UEndTextResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", (Native)&UEndTextResource::execGetText },
			{ "GetTextInfo", (Native)&UEndTextResource::execGetTextInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEndTextResource_GetText()
	{
		struct EndTextResource_eventGetText_Parms
		{
			FString InTextId;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EndTextResource_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTextId = { UE4CodeGen_Private::EPropertyClass::Str, "InTextId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResource_eventGetText_Parms, InTextId), METADATA_PARAMS(NewProp_InTextId_MetaData, ARRAY_COUNT(NewProp_InTextId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTextId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EndTextResource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndTextResource, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EndTextResource_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEndTextResource_GetTextInfo()
	{
		struct EndTextResource_eventGetTextInfo_Parms
		{
			FString InTextId;
			FEndTextResourceInfo ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EndTextResource_eventGetTextInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FEndTextResourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTextId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTextId = { UE4CodeGen_Private::EPropertyClass::Str, "InTextId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EndTextResource_eventGetTextInfo_Parms, InTextId), METADATA_PARAMS(NewProp_InTextId_MetaData, ARRAY_COUNT(NewProp_InTextId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTextId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EndTextResource.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndTextResource, "GetTextInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(EndTextResource_eventGetTextInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndTextResource_NoRegister()
	{
		return UEndTextResource::StaticClass();
	}
	UClass* Z_Construct_UClass_UEndTextResource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EndTextResource,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEndTextResource_GetText, "GetText" }, // 2087586597
				{ &Z_Construct_UFunction_UEndTextResource_GetTextInfo, "GetTextInfo" }, // 3994492728
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "EndTextResource.h" },
				{ "ModuleRelativePath", "Public/EndTextResource.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "EndTextResource" },
				{ "ModuleRelativePath", "Public/EndTextResource.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language = { UE4CodeGen_Private::EPropertyClass::Str, "Language", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEndTextResource, Language), METADATA_PARAMS(NewProp_Language_MetaData, ARRAY_COUNT(NewProp_Language_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Language,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEndTextResource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEndTextResource::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndTextResource, 2097445614);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndTextResource(Z_Construct_UClass_UEndTextResource, &UEndTextResource::StaticClass, TEXT("/Script/EndTextResource"), TEXT("UEndTextResource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndTextResource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
