// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/AbilitySystem/TPBaseAbilitySystemComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPBaseAbilitySystemComp() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPBaseAbilitySystemComp();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPBaseAbilitySystemComp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UTPBaseAbilitySystemComp::StaticRegisterNativesUTPBaseAbilitySystemComp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPBaseAbilitySystemComp);
	UClass* Z_Construct_UClass_UTPBaseAbilitySystemComp_NoRegister()
	{
		return UTPBaseAbilitySystemComp::StaticClass();
	}
	struct Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/TPBaseAbilitySystemComp.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/TPBaseAbilitySystemComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPBaseAbilitySystemComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::ClassParams = {
		&UTPBaseAbilitySystemComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPBaseAbilitySystemComp()
	{
		if (!Z_Registration_Info_UClass_UTPBaseAbilitySystemComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPBaseAbilitySystemComp.OuterSingleton, Z_Construct_UClass_UTPBaseAbilitySystemComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPBaseAbilitySystemComp.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPBaseAbilitySystemComp>()
	{
		return UTPBaseAbilitySystemComp::StaticClass();
	}
	UTPBaseAbilitySystemComp::UTPBaseAbilitySystemComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPBaseAbilitySystemComp);
	UTPBaseAbilitySystemComp::~UTPBaseAbilitySystemComp() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPBaseAbilitySystemComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPBaseAbilitySystemComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPBaseAbilitySystemComp, UTPBaseAbilitySystemComp::StaticClass, TEXT("UTPBaseAbilitySystemComp"), &Z_Registration_Info_UClass_UTPBaseAbilitySystemComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPBaseAbilitySystemComp), 3718252663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPBaseAbilitySystemComp_h_2984062182(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPBaseAbilitySystemComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPBaseAbilitySystemComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
