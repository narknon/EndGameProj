// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SkeletalMeshComponentBudgeted.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponentBudgeted() {}
// Cross Module References
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationBudgetAllocator();
	ANIMATIONBUDGETALLOCATOR_API UFunction* Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator();
// End Cross Module References
	void USkeletalMeshComponentBudgeted::StaticRegisterNativesUSkeletalMeshComponentBudgeted()
	{
		UClass* Class = USkeletalMeshComponentBudgeted::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAutoRegisterWithBudgetAllocator", (Native)&USkeletalMeshComponentBudgeted::execSetAutoRegisterWithBudgetAllocator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator()
	{
		struct SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms
		{
			bool bInAutoRegisterWithBudgetAllocator;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bInAutoRegisterWithBudgetAllocator_SetBit = [](void* Obj){ ((SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms*)Obj)->bInAutoRegisterWithBudgetAllocator = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAutoRegisterWithBudgetAllocator = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAutoRegisterWithBudgetAllocator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInAutoRegisterWithBudgetAllocator_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInAutoRegisterWithBudgetAllocator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponentBudgeted, "SetAutoRegisterWithBudgetAllocator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister()
	{
		return USkeletalMeshComponentBudgeted::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationBudgetAllocator,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator, "SetAutoRegisterWithBudgetAllocator" }, // 71485320
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Object Mobility Trigger" },
				{ "IncludePath", "SkeletalMeshComponentBudgeted.h" },
				{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSignificance_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SkeletalMeshComponentBudgeted" },
				{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
			};
#endif
			auto NewProp_bAutoCalculateSignificance_SetBit = [](void* Obj){ ((USkeletalMeshComponentBudgeted*)Obj)->bAutoCalculateSignificance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSignificance = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCalculateSignificance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMeshComponentBudgeted), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoCalculateSignificance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoCalculateSignificance_MetaData, ARRAY_COUNT(NewProp_bAutoCalculateSignificance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithBudgetAllocator_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SkeletalMeshComponentBudgeted" },
				{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
			};
#endif
			auto NewProp_bAutoRegisterWithBudgetAllocator_SetBit = [](void* Obj){ ((USkeletalMeshComponentBudgeted*)Obj)->bAutoRegisterWithBudgetAllocator = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithBudgetAllocator = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRegisterWithBudgetAllocator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMeshComponentBudgeted), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoRegisterWithBudgetAllocator_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoRegisterWithBudgetAllocator_MetaData, ARRAY_COUNT(NewProp_bAutoRegisterWithBudgetAllocator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoCalculateSignificance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoRegisterWithBudgetAllocator,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeletalMeshComponentBudgeted>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeletalMeshComponentBudgeted::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(USkeletalMeshComponentBudgeted, 3157352436);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshComponentBudgeted(Z_Construct_UClass_USkeletalMeshComponentBudgeted, &USkeletalMeshComponentBudgeted::StaticClass, TEXT("/Script/AnimationBudgetAllocator"), TEXT("USkeletalMeshComponentBudgeted"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshComponentBudgeted);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
