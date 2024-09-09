// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mythica/Private/MythicaDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMythicaDeveloperSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MYTHICA_API UClass* Z_Construct_UClass_UMythicaDeveloperSettings();
MYTHICA_API UClass* Z_Construct_UClass_UMythicaDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mythica();
// End Cross Module References

// Begin Class UMythicaDeveloperSettings
void UMythicaDeveloperSettings::StaticRegisterNativesUMythicaDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMythicaDeveloperSettings);
UClass* Z_Construct_UClass_UMythicaDeveloperSettings_NoRegister()
{
	return UMythicaDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UMythicaDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mythica" },
		{ "IncludePath", "MythicaDeveloperSettings.h" },
		{ "ModuleRelativePath", "Private/MythicaDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceURL_MetaData[] = {
		{ "Category", "Server" },
		{ "ModuleRelativePath", "Private/MythicaDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagesURL_MetaData[] = {
		{ "Category", "Server" },
		{ "ModuleRelativePath", "Private/MythicaDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportDirectory_MetaData[] = {
		{ "Category", "Server" },
		{ "ModuleRelativePath", "Private/MythicaDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Private/MythicaDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagesURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMythicaDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ServiceURL = { "ServiceURL", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaDeveloperSettings, ServiceURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceURL_MetaData), NewProp_ServiceURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ImagesURL = { "ImagesURL", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaDeveloperSettings, ImagesURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagesURL_MetaData), NewProp_ImagesURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ImportDirectory = { "ImportDirectory", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaDeveloperSettings, ImportDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportDirectory_MetaData), NewProp_ImportDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ProfileId = { "ProfileId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMythicaDeveloperSettings, ProfileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileId_MetaData), NewProp_ProfileId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMythicaDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ServiceURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ImagesURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ImportDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMythicaDeveloperSettings_Statics::NewProp_ProfileId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMythicaDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Mythica,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMythicaDeveloperSettings_Statics::ClassParams = {
	&UMythicaDeveloperSettings::StaticClass,
	"Plugins",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMythicaDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMythicaDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMythicaDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMythicaDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UMythicaDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMythicaDeveloperSettings.OuterSingleton, Z_Construct_UClass_UMythicaDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMythicaDeveloperSettings.OuterSingleton;
}
template<> MYTHICA_API UClass* StaticClass<UMythicaDeveloperSettings>()
{
	return UMythicaDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMythicaDeveloperSettings);
UMythicaDeveloperSettings::~UMythicaDeveloperSettings() {}
// End Class UMythicaDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealTechArt_Plugins_Mythica_Source_Mythica_Private_MythicaDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMythicaDeveloperSettings, UMythicaDeveloperSettings::StaticClass, TEXT("UMythicaDeveloperSettings"), &Z_Registration_Info_UClass_UMythicaDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMythicaDeveloperSettings), 839982215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTechArt_Plugins_Mythica_Source_Mythica_Private_MythicaDeveloperSettings_h_2694599208(TEXT("/Script/Mythica"),
	Z_CompiledInDeferFile_FID_UnrealTechArt_Plugins_Mythica_Source_Mythica_Private_MythicaDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealTechArt_Plugins_Mythica_Source_Mythica_Private_MythicaDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
