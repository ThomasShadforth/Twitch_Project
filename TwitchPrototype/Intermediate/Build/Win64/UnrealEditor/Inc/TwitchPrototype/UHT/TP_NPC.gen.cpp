// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_NPC() {}
// Cross Module References
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_NPC();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_NPC_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPCharacterBase();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_NPC::StaticRegisterNativesATP_NPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_NPC);
	UClass* Z_Construct_UClass_ATP_NPC_NoRegister()
	{
		return ATP_NPC::StaticClass();
	}
	struct Z_Construct_UClass_ATP_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATPCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_NPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_NPC_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_NPC.h" },
		{ "ModuleRelativePath", "Public/TP_NPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_NPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_NPC_Statics::ClassParams = {
		&ATP_NPC::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_NPC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATP_NPC()
	{
		if (!Z_Registration_Info_UClass_ATP_NPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_NPC.OuterSingleton, Z_Construct_UClass_ATP_NPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_NPC.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_NPC>()
	{
		return ATP_NPC::StaticClass();
	}
	ATP_NPC::ATP_NPC() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_NPC);
	ATP_NPC::~ATP_NPC() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_NPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_NPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_NPC, ATP_NPC::StaticClass, TEXT("ATP_NPC"), &Z_Registration_Info_UClass_ATP_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_NPC), 823202120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_NPC_h_2614841142(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_NPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
