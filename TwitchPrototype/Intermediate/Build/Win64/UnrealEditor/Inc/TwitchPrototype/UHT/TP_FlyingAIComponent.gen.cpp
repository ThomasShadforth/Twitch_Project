// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_FlyingAIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_FlyingAIComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_FlyingAIComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_FlyingAIComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UTP_FlyingAIComponent::StaticRegisterNativesUTP_FlyingAIComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_FlyingAIComponent);
	UClass* Z_Construct_UClass_UTP_FlyingAIComponent_NoRegister()
	{
		return UTP_FlyingAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTP_FlyingAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_FlyingAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_FlyingAIComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_FlyingAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TP_FlyingAIComponent.h" },
		{ "ModuleRelativePath", "Public/TP_FlyingAIComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_FlyingAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_FlyingAIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_FlyingAIComponent_Statics::ClassParams = {
		&UTP_FlyingAIComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_FlyingAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_FlyingAIComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTP_FlyingAIComponent()
	{
		if (!Z_Registration_Info_UClass_UTP_FlyingAIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_FlyingAIComponent.OuterSingleton, Z_Construct_UClass_UTP_FlyingAIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_FlyingAIComponent.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_FlyingAIComponent>()
	{
		return UTP_FlyingAIComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_FlyingAIComponent);
	UTP_FlyingAIComponent::~UTP_FlyingAIComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_FlyingAIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_FlyingAIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_FlyingAIComponent, UTP_FlyingAIComponent::StaticClass, TEXT("UTP_FlyingAIComponent"), &Z_Registration_Info_UClass_UTP_FlyingAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_FlyingAIComponent), 984074362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_FlyingAIComponent_h_455187860(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_FlyingAIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_FlyingAIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
