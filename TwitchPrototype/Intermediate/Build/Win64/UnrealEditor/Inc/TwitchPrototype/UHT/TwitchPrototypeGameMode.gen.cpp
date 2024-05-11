// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TwitchPrototypeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchPrototypeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATwitchPrototypeGameMode();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATwitchPrototypeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATwitchPrototypeGameMode::StaticRegisterNativesATwitchPrototypeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATwitchPrototypeGameMode);
	UClass* Z_Construct_UClass_ATwitchPrototypeGameMode_NoRegister()
	{
		return ATwitchPrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATwitchPrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TwitchPrototypeGameMode.h" },
		{ "ModuleRelativePath", "TwitchPrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwitchPrototypeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::ClassParams = {
		&ATwitchPrototypeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATwitchPrototypeGameMode()
	{
		if (!Z_Registration_Info_UClass_ATwitchPrototypeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwitchPrototypeGameMode.OuterSingleton, Z_Construct_UClass_ATwitchPrototypeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATwitchPrototypeGameMode.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATwitchPrototypeGameMode>()
	{
		return ATwitchPrototypeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwitchPrototypeGameMode);
	ATwitchPrototypeGameMode::~ATwitchPrototypeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TwitchPrototypeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TwitchPrototypeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATwitchPrototypeGameMode, ATwitchPrototypeGameMode::StaticClass, TEXT("ATwitchPrototypeGameMode"), &Z_Registration_Info_UClass_ATwitchPrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwitchPrototypeGameMode), 4229838102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TwitchPrototypeGameMode_h_1681583020(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TwitchPrototypeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TwitchPrototypeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
