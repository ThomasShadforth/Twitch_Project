// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Data/TP_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_GameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_GameInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_GameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UTP_GameInstance::StaticRegisterNativesUTP_GameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_GameInstance);
	UClass* Z_Construct_UClass_UTP_GameInstance_NoRegister()
	{
		return UTP_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/TP_GameInstance.h" },
		{ "ModuleRelativePath", "Public/Data/TP_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_GameInstance_Statics::ClassParams = {
		&UTP_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_GameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTP_GameInstance()
	{
		if (!Z_Registration_Info_UClass_UTP_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_GameInstance.OuterSingleton, Z_Construct_UClass_UTP_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_GameInstance.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_GameInstance>()
	{
		return UTP_GameInstance::StaticClass();
	}
	UTP_GameInstance::UTP_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_GameInstance);
	UTP_GameInstance::~UTP_GameInstance() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_TP_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_TP_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_GameInstance, UTP_GameInstance::StaticClass, TEXT("UTP_GameInstance"), &Z_Registration_Info_UClass_UTP_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_GameInstance), 1861576465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_TP_GameInstance_h_4036235726(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_TP_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_TP_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
