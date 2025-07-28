// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Animation/TP_PlayerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PlayerAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_PlayerAnimInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_PlayerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UTP_PlayerAnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UTP_PlayerAnimInstance::StaticRegisterNativesUTP_PlayerAnimInstance()
	{
		UClass* Class = UTP_PlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UTP_PlayerAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics
	{
		struct TP_PlayerAnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_PlayerAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::TP_PlayerAnimInstance_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::TP_PlayerAnimInstance_eventUpdateAnimationProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_PlayerAnimInstance);
	UClass* Z_Construct_UClass_UTP_PlayerAnimInstance_NoRegister()
	{
		return UTP_PlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP_PlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_groundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasStomping_MetaData[];
#endif
		static void NewProp_bWasStomping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasStomping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_PlayerAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3473956575
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/TP_PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_playerCharacter = { "playerCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_PlayerAnimInstance, playerCharacter), Z_Construct_UClass_ATP_PlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_playerCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_characterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_characterMovement = { "characterMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_PlayerAnimInstance, characterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_characterMovement_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_characterMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_groundSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_groundSpeed = { "groundSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_PlayerAnimInstance, groundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_groundSpeed_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_groundSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_velocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_PlayerAnimInstance, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_velocity_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UTP_PlayerAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTP_PlayerAnimInstance), &Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UTP_PlayerAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTP_PlayerAnimInstance), &Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((UTP_PlayerAnimInstance*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTP_PlayerAnimInstance), &Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animation/TP_PlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping_SetBit(void* Obj)
	{
		((UTP_PlayerAnimInstance*)Obj)->bWasStomping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping = { "bWasStomping", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTP_PlayerAnimInstance), &Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping_MetaData), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_playerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_characterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_groundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bShouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::NewProp_bWasStomping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_PlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::ClassParams = {
		&UTP_PlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTP_PlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTP_PlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_PlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UTP_PlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_PlayerAnimInstance.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_PlayerAnimInstance>()
	{
		return UTP_PlayerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_PlayerAnimInstance);
	UTP_PlayerAnimInstance::~UTP_PlayerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_PlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_PlayerAnimInstance, UTP_PlayerAnimInstance::StaticClass, TEXT("UTP_PlayerAnimInstance"), &Z_Registration_Info_UClass_UTP_PlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_PlayerAnimInstance), 120315873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_PlayerAnimInstance_h_2275318451(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
