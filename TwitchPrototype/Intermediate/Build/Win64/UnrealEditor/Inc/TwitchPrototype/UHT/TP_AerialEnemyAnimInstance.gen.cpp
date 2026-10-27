// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Animation/TP_AerialEnemyAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_AerialEnemyAnimInstance() {}
// Cross Module References
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_AerialEnemyAnimInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_AerialEnemyAnimInstance_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UTP_AerialEnemyAnimInstance::StaticRegisterNativesUTP_AerialEnemyAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_AerialEnemyAnimInstance);
	UClass* Z_Construct_UClass_UTP_AerialEnemyAnimInstance_NoRegister()
	{
		return UTP_AerialEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTP_EnemyAnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/TP_AerialEnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/TP_AerialEnemyAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_AerialEnemyAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::ClassParams = {
		&UTP_AerialEnemyAnimInstance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTP_AerialEnemyAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTP_AerialEnemyAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_AerialEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UTP_AerialEnemyAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_AerialEnemyAnimInstance.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_AerialEnemyAnimInstance>()
	{
		return UTP_AerialEnemyAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_AerialEnemyAnimInstance);
	UTP_AerialEnemyAnimInstance::~UTP_AerialEnemyAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_AerialEnemyAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_AerialEnemyAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_AerialEnemyAnimInstance, UTP_AerialEnemyAnimInstance::StaticClass, TEXT("UTP_AerialEnemyAnimInstance"), &Z_Registration_Info_UClass_UTP_AerialEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_AerialEnemyAnimInstance), 3000546549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_AerialEnemyAnimInstance_h_8859109(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_AerialEnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_AerialEnemyAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
