// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Animation/TP_GroundEnemyAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_GroundEnemyAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_GroundEnemyAnimInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_GroundEnemyAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UTP_GroundEnemyAnimInstance::StaticRegisterNativesUTP_GroundEnemyAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_GroundEnemyAnimInstance);
	UClass* Z_Construct_UClass_UTP_GroundEnemyAnimInstance_NoRegister()
	{
		return UTP_GroundEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_groundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTP_EnemyAnimInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/TP_GroundEnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/TP_GroundEnemyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_enemyMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_GroundEnemyAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/TP_GroundEnemyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_enemyMovement = { "enemyMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_GroundEnemyAnimInstance, enemyMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_enemyMovement_MetaData), Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_enemyMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_groundSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_GroundEnemyAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_GroundEnemyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_groundSpeed = { "groundSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_GroundEnemyAnimInstance, groundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_groundSpeed_MetaData), Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_groundSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_velocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_GroundEnemyAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_GroundEnemyAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_GroundEnemyAnimInstance, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_velocity_MetaData), Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_GroundEnemyAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_GroundEnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((UTP_GroundEnemyAnimInstance*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTP_GroundEnemyAnimInstance), &Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove_MetaData), Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_enemyMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_groundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::NewProp_bShouldMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_GroundEnemyAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::ClassParams = {
		&UTP_GroundEnemyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTP_GroundEnemyAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTP_GroundEnemyAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_GroundEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UTP_GroundEnemyAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_GroundEnemyAnimInstance.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_GroundEnemyAnimInstance>()
	{
		return UTP_GroundEnemyAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_GroundEnemyAnimInstance);
	UTP_GroundEnemyAnimInstance::~UTP_GroundEnemyAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_GroundEnemyAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_GroundEnemyAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_GroundEnemyAnimInstance, UTP_GroundEnemyAnimInstance::StaticClass, TEXT("UTP_GroundEnemyAnimInstance"), &Z_Registration_Info_UClass_UTP_GroundEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_GroundEnemyAnimInstance), 3234353476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_GroundEnemyAnimInstance_h_665802362(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_GroundEnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_GroundEnemyAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
