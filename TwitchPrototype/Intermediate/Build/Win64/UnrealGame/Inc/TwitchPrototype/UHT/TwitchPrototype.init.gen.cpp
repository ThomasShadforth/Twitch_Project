// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchPrototype_init() {}
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnHealthChangedSignature__DelegateSignature();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnMaxHealthChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TwitchPrototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TwitchPrototype()
	{
		if (!Z_Registration_Info_UPackage__Script_TwitchPrototype.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchPrototype_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchPrototype_OnMaxHealthChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TwitchPrototype",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8A70D37C,
				0x8D754E7B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TwitchPrototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TwitchPrototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TwitchPrototype(Z_Construct_UPackage__Script_TwitchPrototype, TEXT("/Script/TwitchPrototype"), Z_Registration_Info_UPackage__Script_TwitchPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8A70D37C, 0x8D754E7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
