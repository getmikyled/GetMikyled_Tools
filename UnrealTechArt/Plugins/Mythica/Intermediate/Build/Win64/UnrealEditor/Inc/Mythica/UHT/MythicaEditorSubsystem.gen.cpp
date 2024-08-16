// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mythica/Private/MythicaEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMythicaEditorSubsystem() {}

// Begin Cross Module References
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MYTHICA_API UClass* Z_Construct_UClass_UMythicaEditorSubsystem();
MYTHICA_API UClass* Z_Construct_UClass_UMythicaEditorSubsystem_NoRegister();
MYTHICA_API UEnum* Z_Construct_UEnum_Mythica_EMythicaSessionState();
MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature();
MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature();
MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature();
MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature();
MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature();
MYTHICA_API UScriptStruct* Z_Construct_UScriptStruct_FMythicaAsset();
MYTHICA_API UScriptStruct* Z_Construct_UScriptStruct_FMythicaAssetVersion();
MYTHICA_API UScriptStruct* Z_Construct_UScriptStruct_FMythicaStats();
UPackage* Z_Construct_UPackage__Script_Mythica();
// End Cross Module References

// Begin Enum EMythicaSessionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMythicaSessionState;
static UEnum* EMythicaSessionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMythicaSessionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMythicaSessionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mythica_EMythicaSessionState, (UObject*)Z_Construct_UPackage__Script_Mythica(), TEXT("EMythicaSessionState"));
	}
	return Z_Registration_Info_UEnum_EMythicaSessionState.OuterSingleton;
}
template<> MYTHICA_API UEnum* StaticEnum<EMythicaSessionState>()
{
	return EMythicaSessionState_StaticEnum();
}
struct Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
		{ "None.Name", "None" },
		{ "RequestingSession.Name", "RequestingSession" },
		{ "SessionCreated.Name", "SessionCreated" },
		{ "SessionFailed.Name", "SessionFailed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "RequestingSession", (int64)RequestingSession },
		{ "SessionFailed", (int64)SessionFailed },
		{ "SessionCreated", (int64)SessionCreated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mythica,
	nullptr,
	"EMythicaSessionState",
	"EMythicaSessionState",
	Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mythica_EMythicaSessionState()
{
	if (!Z_Registration_Info_UEnum_EMythicaSessionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMythicaSessionState.InnerSingleton, Z_Construct_UEnum_Mythica_EMythicaSessionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMythicaSessionState.InnerSingleton;
}
// End Enum EMythicaSessionState

// Begin Delegate FOnSessionStateChanged
struct Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics
{
	struct _Script_Mythica_eventOnSessionStateChanged_Parms
	{
		TEnumAsByte<EMythicaSessionState> State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mythica_eventOnSessionStateChanged_Parms, State), Z_Construct_UEnum_Mythica_EMythicaSessionState, METADATA_PARAMS(0, nullptr) }; // 3044210927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mythica, nullptr, "OnSessionStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::_Script_Mythica_eventOnSessionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::_Script_Mythica_eventOnSessionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSessionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSessionStateChanged, EMythicaSessionState State)
{
	struct _Script_Mythica_eventOnSessionStateChanged_Parms
	{
		TEnumAsByte<EMythicaSessionState> State;
	};
	_Script_Mythica_eventOnSessionStateChanged_Parms Parms;
	Parms.State=State;
	OnSessionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSessionStateChanged

// Begin Delegate FOnAssetListUpdated
struct Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mythica, nullptr, "OnAssetListUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetListUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAssetListUpdated)
{
	OnAssetListUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAssetListUpdated

// Begin Delegate FOnThumbnailLoaded
struct Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics
{
	struct _Script_Mythica_eventOnThumbnailLoaded_Parms
	{
		FString PackageId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mythica_eventOnThumbnailLoaded_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::NewProp_PackageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mythica, nullptr, "OnThumbnailLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::_Script_Mythica_eventOnThumbnailLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::_Script_Mythica_eventOnThumbnailLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnThumbnailLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnThumbnailLoaded, const FString& PackageId)
{
	struct _Script_Mythica_eventOnThumbnailLoaded_Parms
	{
		FString PackageId;
	};
	_Script_Mythica_eventOnThumbnailLoaded_Parms Parms;
	Parms.PackageId=PackageId;
	OnThumbnailLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnThumbnailLoaded

// Begin Delegate FOnAssetInstalled
struct Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics
{
	struct _Script_Mythica_eventOnAssetInstalled_Parms
	{
		FString PackageId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mythica_eventOnAssetInstalled_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::NewProp_PackageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mythica, nullptr, "OnAssetInstalled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::_Script_Mythica_eventOnAssetInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::_Script_Mythica_eventOnAssetInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnAssetInstalled, const FString& PackageId)
{
	struct _Script_Mythica_eventOnAssetInstalled_Parms
	{
		FString PackageId;
	};
	_Script_Mythica_eventOnAssetInstalled_Parms Parms;
	Parms.PackageId=PackageId;
	OnAssetInstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAssetInstalled

// Begin Delegate FOnAssetUninstalled
struct Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics
{
	struct _Script_Mythica_eventOnAssetUninstalled_Parms
	{
		FString PackageId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mythica_eventOnAssetUninstalled_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::NewProp_PackageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mythica, nullptr, "OnAssetUninstalled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::_Script_Mythica_eventOnAssetUninstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::_Script_Mythica_eventOnAssetUninstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnAssetUninstalled, const FString& PackageId)
{
	struct _Script_Mythica_eventOnAssetUninstalled_Parms
	{
		FString PackageId;
	};
	_Script_Mythica_eventOnAssetUninstalled_Parms Parms;
	Parms.PackageId=PackageId;
	OnAssetUninstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAssetUninstalled

// Begin ScriptStruct FMythicaStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MythicaStats;
class UScriptStruct* FMythicaStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MythicaStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMythicaStats, (UObject*)Z_Construct_UPackage__Script_Mythica(), TEXT("MythicaStats"));
	}
	return Z_Registration_Info_UScriptStruct_MythicaStats.OuterSingleton;
}
template<> MYTHICA_API UScriptStruct* StaticStruct<FMythicaStats>()
{
	return FMythicaStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMythicaStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPackages_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalDigitalAssets_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPackages;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalDigitalAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMythicaStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaStats_Statics::NewProp_TotalPackages = { "TotalPackages", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaStats, TotalPackages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPackages_MetaData), NewProp_TotalPackages_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaStats_Statics::NewProp_TotalDigitalAssets = { "TotalDigitalAssets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaStats, TotalDigitalAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalDigitalAssets_MetaData), NewProp_TotalDigitalAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMythicaStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaStats_Statics::NewProp_TotalPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaStats_Statics::NewProp_TotalDigitalAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMythicaStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mythica,
	nullptr,
	&NewStructOps,
	"MythicaStats",
	Z_Construct_UScriptStruct_FMythicaStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaStats_Statics::PropPointers),
	sizeof(FMythicaStats),
	alignof(FMythicaStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMythicaStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMythicaStats()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MythicaStats.InnerSingleton, Z_Construct_UScriptStruct_FMythicaStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MythicaStats.InnerSingleton;
}
// End ScriptStruct FMythicaStats

// Begin ScriptStruct FMythicaAssetVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MythicaAssetVersion;
class UScriptStruct* FMythicaAssetVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaAssetVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MythicaAssetVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMythicaAssetVersion, (UObject*)Z_Construct_UPackage__Script_Mythica(), TEXT("MythicaAssetVersion"));
	}
	return Z_Registration_Info_UScriptStruct_MythicaAssetVersion.OuterSingleton;
}
template<> MYTHICA_API UScriptStruct* StaticStruct<FMythicaAssetVersion>()
{
	return FMythicaAssetVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Major_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minor_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Patch_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Patch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMythicaAssetVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAssetVersion, Major), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Major_MetaData), NewProp_Major_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAssetVersion, Minor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minor_MetaData), NewProp_Minor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAssetVersion, Patch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Patch_MetaData), NewProp_Patch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewProp_Patch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mythica,
	nullptr,
	&NewStructOps,
	"MythicaAssetVersion",
	Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::PropPointers),
	sizeof(FMythicaAssetVersion),
	alignof(FMythicaAssetVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMythicaAssetVersion()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaAssetVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MythicaAssetVersion.InnerSingleton, Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MythicaAssetVersion.InnerSingleton;
}
// End ScriptStruct FMythicaAssetVersion

// Begin ScriptStruct FMythicaAsset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MythicaAsset;
class UScriptStruct* FMythicaAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MythicaAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMythicaAsset, (UObject*)Z_Construct_UPackage__Script_Mythica(), TEXT("MythicaAsset"));
	}
	return Z_Registration_Info_UScriptStruct_MythicaAsset.OuterSingleton;
}
template<> MYTHICA_API UScriptStruct* StaticStruct<FMythicaAsset>()
{
	return FMythicaAsset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMythicaAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrgName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailURL_MetaData[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DigitalAssetCount_MetaData[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrgName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DigitalAssetCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMythicaAsset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, AssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetId_MetaData), NewProp_AssetId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_OrgName = { "OrgName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, OrgName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrgName_MetaData), NewProp_OrgName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, Version), Z_Construct_UScriptStruct_FMythicaAssetVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 2141351194
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_ThumbnailURL = { "ThumbnailURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, ThumbnailURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailURL_MetaData), NewProp_ThumbnailURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_DigitalAssetCount = { "DigitalAssetCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMythicaAsset, DigitalAssetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DigitalAssetCount_MetaData), NewProp_DigitalAssetCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMythicaAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_PackageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_OrgName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_ThumbnailURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewProp_DigitalAssetCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMythicaAsset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mythica,
	nullptr,
	&NewStructOps,
	"MythicaAsset",
	Z_Construct_UScriptStruct_FMythicaAsset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAsset_Statics::PropPointers),
	sizeof(FMythicaAsset),
	alignof(FMythicaAsset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMythicaAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMythicaAsset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMythicaAsset()
{
	if (!Z_Registration_Info_UScriptStruct_MythicaAsset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MythicaAsset.InnerSingleton, Z_Construct_UScriptStruct_FMythicaAsset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MythicaAsset.InnerSingleton;
}
// End ScriptStruct FMythicaAsset

// Begin Class UMythicaEditorSubsystem Function CanInstallAssets
struct Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics
{
	struct MythicaEditorSubsystem_eventCanInstallAssets_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MythicaEditorSubsystem_eventCanInstallAssets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MythicaEditorSubsystem_eventCanInstallAssets_Parms), &Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "CanInstallAssets", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::MythicaEditorSubsystem_eventCanInstallAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::MythicaEditorSubsystem_eventCanInstallAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execCanInstallAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInstallAssets();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function CanInstallAssets

// Begin Class UMythicaEditorSubsystem Function CreateSession
struct Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "Comment", "// Requests\n" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
		{ "ToolTip", "Requests" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "CreateSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execCreateSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSession();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function CreateSession

// Begin Class UMythicaEditorSubsystem Function GetAssetList
struct Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics
{
	struct MythicaEditorSubsystem_eventGetAssetList_Parms
	{
		TArray<FMythicaAsset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMythicaAsset, METADATA_PARAMS(0, nullptr) }; // 3128541086
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventGetAssetList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3128541086
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "GetAssetList", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::MythicaEditorSubsystem_eventGetAssetList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::MythicaEditorSubsystem_eventGetAssetList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execGetAssetList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMythicaAsset>*)Z_Param__Result=P_THIS->GetAssetList();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function GetAssetList

// Begin Class UMythicaEditorSubsystem Function GetSessionState
struct Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics
{
	struct MythicaEditorSubsystem_eventGetSessionState_Parms
	{
		TEnumAsByte<EMythicaSessionState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
		{ "ToolTip", "Getters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventGetSessionState_Parms, ReturnValue), Z_Construct_UEnum_Mythica_EMythicaSessionState, METADATA_PARAMS(0, nullptr) }; // 3044210927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "GetSessionState", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::MythicaEditorSubsystem_eventGetSessionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::MythicaEditorSubsystem_eventGetSessionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execGetSessionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EMythicaSessionState>*)Z_Param__Result=P_THIS->GetSessionState();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function GetSessionState

// Begin Class UMythicaEditorSubsystem Function GetStats
struct Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics
{
	struct MythicaEditorSubsystem_eventGetStats_Parms
	{
		FMythicaStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventGetStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FMythicaStats, METADATA_PARAMS(0, nullptr) }; // 3787687183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "GetStats", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::MythicaEditorSubsystem_eventGetStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::MythicaEditorSubsystem_eventGetStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execGetStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMythicaStats*)Z_Param__Result=P_THIS->GetStats();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function GetStats

// Begin Class UMythicaEditorSubsystem Function GetThumbnail
struct Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics
{
	struct MythicaEditorSubsystem_eventGetThumbnail_Parms
	{
		FString PackageId;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventGetThumbnail_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::NewProp_PackageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "GetThumbnail", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::MythicaEditorSubsystem_eventGetThumbnail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::MythicaEditorSubsystem_eventGetThumbnail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execGetThumbnail)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail(Z_Param_PackageId);
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function GetThumbnail

// Begin Class UMythicaEditorSubsystem Function InstallAsset
struct Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics
{
	struct MythicaEditorSubsystem_eventInstallAsset_Parms
	{
		FString PackageId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventInstallAsset_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::NewProp_PackageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "InstallAsset", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::MythicaEditorSubsystem_eventInstallAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::MythicaEditorSubsystem_eventInstallAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execInstallAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InstallAsset(Z_Param_PackageId);
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function InstallAsset

// Begin Class UMythicaEditorSubsystem Function IsAssetInstalled
struct Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics
{
	struct MythicaEditorSubsystem_eventIsAssetInstalled_Parms
	{
		FString PackageId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventIsAssetInstalled_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
void Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MythicaEditorSubsystem_eventIsAssetInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MythicaEditorSubsystem_eventIsAssetInstalled_Parms), &Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_PackageId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "IsAssetInstalled", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::MythicaEditorSubsystem_eventIsAssetInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::MythicaEditorSubsystem_eventIsAssetInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execIsAssetInstalled)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetInstalled(Z_Param_PackageId);
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function IsAssetInstalled

// Begin Class UMythicaEditorSubsystem Function UninstallAsset
struct Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics
{
	struct MythicaEditorSubsystem_eventUninstallAsset_Parms
	{
		FString PackageId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::NewProp_PackageId = { "PackageId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MythicaEditorSubsystem_eventUninstallAsset_Parms, PackageId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageId_MetaData), NewProp_PackageId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::NewProp_PackageId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "UninstallAsset", nullptr, nullptr, Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::MythicaEditorSubsystem_eventUninstallAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::MythicaEditorSubsystem_eventUninstallAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execUninstallAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PackageId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UninstallAsset(Z_Param_PackageId);
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function UninstallAsset

// Begin Class UMythicaEditorSubsystem Function UpdateAssetList
struct Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMythicaEditorSubsystem, nullptr, "UpdateAssetList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMythicaEditorSubsystem::execUpdateAssetList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAssetList();
	P_NATIVE_END;
}
// End Class UMythicaEditorSubsystem Function UpdateAssetList

// Begin Class UMythicaEditorSubsystem
void UMythicaEditorSubsystem::StaticRegisterNativesUMythicaEditorSubsystem()
{
	UClass* Class = UMythicaEditorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInstallAssets", &UMythicaEditorSubsystem::execCanInstallAssets },
		{ "CreateSession", &UMythicaEditorSubsystem::execCreateSession },
		{ "GetAssetList", &UMythicaEditorSubsystem::execGetAssetList },
		{ "GetSessionState", &UMythicaEditorSubsystem::execGetSessionState },
		{ "GetStats", &UMythicaEditorSubsystem::execGetStats },
		{ "GetThumbnail", &UMythicaEditorSubsystem::execGetThumbnail },
		{ "InstallAsset", &UMythicaEditorSubsystem::execInstallAsset },
		{ "IsAssetInstalled", &UMythicaEditorSubsystem::execIsAssetInstalled },
		{ "UninstallAsset", &UMythicaEditorSubsystem::execUninstallAsset },
		{ "UpdateAssetList", &UMythicaEditorSubsystem::execUpdateAssetList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMythicaEditorSubsystem);
UClass* Z_Construct_UClass_UMythicaEditorSubsystem_NoRegister()
{
	return UMythicaEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMythicaEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MythicaEditorSubsystem.h" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSessionStateChanged_MetaData[] = {
		{ "Category", "Mythica" },
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
		{ "ToolTip", "Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetListUpdated_MetaData[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnThumbnailLoaded_MetaData[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetInstalled_MetaData[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetUninstalled_MetaData[] = {
		{ "Category", "Mythica" },
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/MythicaEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetListUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnThumbnailLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetUninstalled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailCache_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbnailCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_CanInstallAssets, "CanInstallAssets" }, // 584883287
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_CreateSession, "CreateSession" }, // 2523066506
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_GetAssetList, "GetAssetList" }, // 316365826
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_GetSessionState, "GetSessionState" }, // 635341879
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_GetStats, "GetStats" }, // 326080337
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_GetThumbnail, "GetThumbnail" }, // 653862897
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_InstallAsset, "InstallAsset" }, // 2733845239
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_IsAssetInstalled, "IsAssetInstalled" }, // 867153160
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_UninstallAsset, "UninstallAsset" }, // 1080298723
		{ &Z_Construct_UFunction_UMythicaEditorSubsystem_UpdateAssetList, "UpdateAssetList" }, // 3930400385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMythicaEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnSessionStateChanged = { "OnSessionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, OnSessionStateChanged), Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSessionStateChanged_MetaData), NewProp_OnSessionStateChanged_MetaData) }; // 1418692435
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetListUpdated = { "OnAssetListUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, OnAssetListUpdated), Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetListUpdated_MetaData), NewProp_OnAssetListUpdated_MetaData) }; // 3646679781
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnThumbnailLoaded = { "OnThumbnailLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, OnThumbnailLoaded), Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnThumbnailLoaded_MetaData), NewProp_OnThumbnailLoaded_MetaData) }; // 2936606390
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetInstalled = { "OnAssetInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, OnAssetInstalled), Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetInstalled_MetaData), NewProp_OnAssetInstalled_MetaData) }; // 2039129039
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetUninstalled = { "OnAssetUninstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, OnAssetUninstalled), Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetUninstalled_MetaData), NewProp_OnAssetUninstalled_MetaData) }; // 2039129039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache_ValueProp = { "ThumbnailCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache_Key_KeyProp = { "ThumbnailCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache = { "ThumbnailCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaEditorSubsystem, ThumbnailCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailCache_MetaData), NewProp_ThumbnailCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMythicaEditorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnSessionStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetListUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnThumbnailLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_OnAssetUninstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaEditorSubsystem_Statics::NewProp_ThumbnailCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaEditorSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMythicaEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Mythica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMythicaEditorSubsystem_Statics::ClassParams = {
	&UMythicaEditorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMythicaEditorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaEditorSubsystem_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMythicaEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMythicaEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_UMythicaEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMythicaEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMythicaEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMythicaEditorSubsystem.OuterSingleton;
}
template<> MYTHICA_API UClass* StaticClass<UMythicaEditorSubsystem>()
{
	return UMythicaEditorSubsystem::StaticClass();
}
UMythicaEditorSubsystem::UMythicaEditorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMythicaEditorSubsystem);
UMythicaEditorSubsystem::~UMythicaEditorSubsystem() {}
// End Class UMythicaEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMythicaSessionState_StaticEnum, TEXT("EMythicaSessionState"), &Z_Registration_Info_UEnum_EMythicaSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3044210927U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMythicaStats::StaticStruct, Z_Construct_UScriptStruct_FMythicaStats_Statics::NewStructOps, TEXT("MythicaStats"), &Z_Registration_Info_UScriptStruct_MythicaStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMythicaStats), 3787687183U) },
		{ FMythicaAssetVersion::StaticStruct, Z_Construct_UScriptStruct_FMythicaAssetVersion_Statics::NewStructOps, TEXT("MythicaAssetVersion"), &Z_Registration_Info_UScriptStruct_MythicaAssetVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMythicaAssetVersion), 2141351194U) },
		{ FMythicaAsset::StaticStruct, Z_Construct_UScriptStruct_FMythicaAsset_Statics::NewStructOps, TEXT("MythicaAsset"), &Z_Registration_Info_UScriptStruct_MythicaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMythicaAsset), 3128541086U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMythicaEditorSubsystem, UMythicaEditorSubsystem::StaticClass, TEXT("UMythicaEditorSubsystem"), &Z_Registration_Info_UClass_UMythicaEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMythicaEditorSubsystem), 71829834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_3221604515(TEXT("/Script/Mythica"),
	Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_MythicaHarness_Plugins_Mythica_Build_Mythica_HostProject_Plugins_Mythica_Source_Mythica_Private_MythicaEditorSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
