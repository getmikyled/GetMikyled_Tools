// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuickAssetAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORTOOLS_QuickAssetAction_generated_h
#error "QuickAssetAction.generated.h already included, missing '#pragma once' in QuickAssetAction.h"
#endif
#define EDITORTOOLS_QuickAssetAction_generated_h

#define FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrintFunc);


#define FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickAssetAction(); \
	friend struct Z_Construct_UClass_UQuickAssetAction_Statics; \
public: \
	DECLARE_CLASS(UQuickAssetAction, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorTools"), NO_API) \
	DECLARE_SERIALIZER(UQuickAssetAction)


#define FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickAssetAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuickAssetAction(UQuickAssetAction&&); \
	UQuickAssetAction(const UQuickAssetAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickAssetAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickAssetAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickAssetAction) \
	NO_API virtual ~UQuickAssetAction();


#define FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_12_PROLOG
#define FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORTOOLS_API UClass* StaticClass<class UQuickAssetAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealTechArt_Plugins_EditorTools_Source_EditorTools_Public_QuickAssetAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
