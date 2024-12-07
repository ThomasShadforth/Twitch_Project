// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_GroundEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_GroundEnemy() {}
// Cross Module References
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_GroundEnemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_GroundEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_GroundEnemy::StaticRegisterNativesATP_GroundEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_GroundEnemy);
	UClass* Z_Construct_UClass_ATP_GroundEnemy_NoRegister()
	{
		return ATP_GroundEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ATP_GroundEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_GroundEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATP_Enemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_GroundEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_GroundEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_GroundEnemy.h" },
		{ "ModuleRelativePath", "Public/TP_GroundEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_GroundEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_GroundEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_GroundEnemy_Statics::ClassParams = {
		&ATP_GroundEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_GroundEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_GroundEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATP_GroundEnemy()
	{
		if (!Z_Registration_Info_UClass_ATP_GroundEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_GroundEnemy.OuterSingleton, Z_Construct_UClass_ATP_GroundEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_GroundEnemy.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_GroundEnemy>()
	{
		return ATP_GroundEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_GroundEnemy);
	ATP_GroundEnemy::~ATP_GroundEnemy() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_GroundEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_GroundEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_GroundEnemy, ATP_GroundEnemy::StaticClass, TEXT("ATP_GroundEnemy"), &Z_Registration_Info_UClass_ATP_GroundEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_GroundEnemy), 2917691682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_GroundEnemy_h_804039531(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_GroundEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_GroundEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
