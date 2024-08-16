// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MythicaEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FMythicaAsset;
struct FMythicaStats;
#ifdef MYTHICA_MythicaEditorSubsystem_generated_h
#error "MythicaEditorSubsystem.generated.h already included, missing '#pragma once' in MythicaEditorSubsystem.h"
#endif
#define MYTHICA_MythicaEditorSubsystem_generated_h

#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_20_DELEGATE \
MYTHICA_API void FOnSessionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSessionStateChanged, EMythicaSessionState State);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_21_DELEGATE \
MYTHICA_API void FOnAssetListUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAssetListUpdated);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_22_DELEGATE \
MYTHICA_API void FOnThumbnailLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnThumbnailLoaded, const FString& PackageId);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_23_DELEGATE \
MYTHICA_API void FOnAssetInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnAssetInstalled, const FString& PackageId);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_24_DELEGATE \
MYTHICA_API void FOnAssetUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnAssetUninstalled, const FString& PackageId);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMythicaStats_Statics; \
	MYTHICA_API static class UScriptStruct* StaticStruct();


template<> MYTHICA_API UScriptStruct* StaticStruct<struct FMythicaStats>();

#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics; \
	MYTHICA_API static class UScriptStruct* StaticStruct();


template<> MYTHICA_API UScriptStruct* StaticStruct<struct FMythicaAssetVersion>();

#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMythicaAsset_Statics; \
	MYTHICA_API static class UScriptStruct* StaticStruct();


template<> MYTHICA_API UScriptStruct* StaticStruct<struct FMythicaAsset>();

#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUninstallAsset); \
	DECLARE_FUNCTION(execInstallAsset); \
	DECLARE_FUNCTION(execUpdateAssetList); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execIsAssetInstalled); \
	DECLARE_FUNCTION(execGetAssetList); \
	DECLARE_FUNCTION(execCanInstallAssets); \
	DECLARE_FUNCTION(execGetSessionState);


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMythicaEditorSubsystem(); \
	friend struct Z_Construct_UClass_UMythicaEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMythicaEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mythica"), NO_API) \
	DECLARE_SERIALIZER(UMythicaEditorSubsystem)


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMythicaEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMythicaEditorSubsystem(UMythicaEditorSubsystem&&); \
	UMythicaEditorSubsystem(const UMythicaEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMythicaEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMythicaEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMythicaEditorSubsystem) \
	NO_API virtual ~UMythicaEditorSubsystem();


#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_88_PROLOG
#define FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_INCLASS_NO_PURE_DECLS \
	FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHICA_API UClass* StaticClass<class UMythicaEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h


#define FOREACH_ENUM_EMYTHICASESSIONSTATE(op) \
	op(None) \
	op(RequestingSession) \
	op(SessionFailed) \
	op(SessionCreated) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
