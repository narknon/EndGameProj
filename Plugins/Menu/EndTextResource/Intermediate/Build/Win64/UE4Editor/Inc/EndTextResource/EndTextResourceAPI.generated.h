// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEndTextResourceInfo;
#ifdef ENDTEXTRESOURCE_EndTextResourceAPI_generated_h
#error "EndTextResourceAPI.generated.h already included, missing '#pragma once' in EndTextResourceAPI.h"
#endif
#define ENDTEXTRESOURCE_EndTextResourceAPI_generated_h

#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextResourceInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEndTextResourceInfo*)Z_Param__Result=UEndTextResourceAPI::GetTextResourceInfo(Z_Param_InTextId,Z_Param_InLanguage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextResourceText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEndTextResourceAPI::GetTextResourceText(Z_Param_InTextId,Z_Param_InLanguage); \
		P_NATIVE_END; \
	}


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextResourceInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEndTextResourceInfo*)Z_Param__Result=UEndTextResourceAPI::GetTextResourceInfo(Z_Param_InTextId,Z_Param_InLanguage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextResourceText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InTextId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UEndTextResourceAPI::GetTextResourceText(Z_Param_InTextId,Z_Param_InLanguage); \
		P_NATIVE_END; \
	}


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndTextResourceAPI(); \
	friend ENDTEXTRESOURCE_API class UClass* Z_Construct_UClass_UEndTextResourceAPI(); \
public: \
	DECLARE_CLASS(UEndTextResourceAPI, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EndTextResource"), NO_API) \
	DECLARE_SERIALIZER(UEndTextResourceAPI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUEndTextResourceAPI(); \
	friend ENDTEXTRESOURCE_API class UClass* Z_Construct_UClass_UEndTextResourceAPI(); \
public: \
	DECLARE_CLASS(UEndTextResourceAPI, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EndTextResource"), NO_API) \
	DECLARE_SERIALIZER(UEndTextResourceAPI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndTextResourceAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndTextResourceAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndTextResourceAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTextResourceAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndTextResourceAPI(UEndTextResourceAPI&&); \
	NO_API UEndTextResourceAPI(const UEndTextResourceAPI&); \
public:


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndTextResourceAPI(UEndTextResourceAPI&&); \
	NO_API UEndTextResourceAPI(const UEndTextResourceAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndTextResourceAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndTextResourceAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEndTextResourceAPI)


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_PRIVATE_PROPERTY_OFFSET
#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_7_PROLOG
#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_PRIVATE_PROPERTY_OFFSET \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_RPC_WRAPPERS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_INCLASS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_PRIVATE_PROPERTY_OFFSET \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_INCLASS_NO_PURE_DECLS \
	End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID End_Plugins_Menu_EndTextResource_Source_EndTextResource_Public_EndTextResourceAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
