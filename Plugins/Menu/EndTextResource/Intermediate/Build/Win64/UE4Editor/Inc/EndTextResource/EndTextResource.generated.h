// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEndTextResourceInfo;
#ifdef ENDTEXTRESOURCE_EndTextResource_generated_h
#error "EndTextResource.generated.h already included, missing '#pragma once' in EndTextResource.h"
#endif
#define ENDTEXTRESOURCE_EndTextResource_generated_h

#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetText(Z_Param_InTextId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEndTextResourceInfo*)Z_Param__Result=this->GetTextInfo(Z_Param_InTextId); \
		P_NATIVE_END; \
	}


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetText(Z_Param_InTextId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEndTextResourceInfo*)Z_Param__Result=this->GetTextInfo(Z_Param_InTextId); \
		P_NATIVE_END; \
	}


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndTextResource(); \
	friend ENDTEXTRESOURCE_API class UClass* Z_Construct_UClass_UEndTextResource(); \
public: \
	DECLARE_CLASS(UEndTextResource, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EndTextResource"), NO_API) \
	DECLARE_SERIALIZER(UEndTextResource) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUEndTextResource(); \
	friend ENDTEXTRESOURCE_API class UClass* Z_Construct_UClass_UEndTextResource(); \
public: \
	DECLARE_CLASS(UEndTextResource, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EndTextResource"), NO_API) \
	DECLARE_SERIALIZER(UEndTextResource) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndTextResource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndTextResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndTextResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTextResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndTextResource(UEndTextResource&&); \
	NO_API UEndTextResource(const UEndTextResource&); \
public:


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndTextResource(UEndTextResource&&); \
	NO_API UEndTextResource(const UEndTextResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndTextResource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTextResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEndTextResource)


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_PRIVATE_PROPERTY_OFFSET
#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_7_PROLOG
#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_PRIVATE_PROPERTY_OFFSET \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_RPC_WRAPPERS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_INCLASS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_PRIVATE_PROPERTY_OFFSET \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_INCLASS_NO_PURE_DECLS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
