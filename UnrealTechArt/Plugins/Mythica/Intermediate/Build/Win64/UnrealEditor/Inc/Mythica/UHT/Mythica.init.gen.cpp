// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMythica_init() {}
	MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature();
	MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature();
	MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature();
	MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature();
	MYTHICA_API UFunction* Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Mythica;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Mythica()
	{
		if (!Z_Registration_Info_UPackage__Script_Mythica.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Mythica_OnAssetInstalled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mythica_OnAssetListUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mythica_OnAssetUninstalled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mythica_OnSessionStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mythica_OnThumbnailLoaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Mythica",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x0618776E,
				0xC3E63CF7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Mythica.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Mythica.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Mythica(Z_Construct_UPackage__Script_Mythica, TEXT("/Script/Mythica"), Z_Registration_Info_UPackage__Script_Mythica, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0618776E, 0xC3E63CF7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
