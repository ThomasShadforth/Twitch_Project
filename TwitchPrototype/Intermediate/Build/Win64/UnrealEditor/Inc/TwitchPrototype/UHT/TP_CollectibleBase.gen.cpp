// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Collectible/TP_CollectibleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_CollectibleBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_CollectibleBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_CollectibleBase_NoRegister();
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_CollectibleBase::execGetCollectibleMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetCollectibleMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_CollectibleBase::execGetCollectibleType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECollectibleTypes*)Z_Param__Result=P_THIS->GetCollectibleType();
		P_NATIVE_END;
	}
	static FName NAME_ATP_CollectibleBase_HideCollectible = FName(TEXT("HideCollectible"));
	void ATP_CollectibleBase::HideCollectible()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_CollectibleBase_HideCollectible),NULL);
	}
	static FName NAME_ATP_CollectibleBase_RevealCollectible = FName(TEXT("RevealCollectible"));
	void ATP_CollectibleBase::RevealCollectible()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_CollectibleBase_RevealCollectible),NULL);
	}
	void ATP_CollectibleBase::StaticRegisterNativesATP_CollectibleBase()
	{
		UClass* Class = ATP_CollectibleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollectibleMesh", &ATP_CollectibleBase::execGetCollectibleMesh },
			{ "GetCollectibleType", &ATP_CollectibleBase::execGetCollectibleType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics
	{
		struct TP_CollectibleBase_eventGetCollectibleMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_CollectibleBase_eventGetCollectibleMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_CollectibleBase, nullptr, "GetCollectibleMesh", nullptr, nullptr, Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::TP_CollectibleBase_eventGetCollectibleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::TP_CollectibleBase_eventGetCollectibleMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics
	{
		struct TP_CollectibleBase_eventGetCollectibleType_Parms
		{
			ECollectibleTypes ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_CollectibleBase_eventGetCollectibleType_Parms, ReturnValue), Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes, METADATA_PARAMS(0, nullptr) }; // 3620290035
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_CollectibleBase, nullptr, "GetCollectibleType", nullptr, nullptr, Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::TP_CollectibleBase_eventGetCollectibleType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::TP_CollectibleBase_eventGetCollectibleType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_CollectibleBase, nullptr, "HideCollectible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_CollectibleBase, nullptr, "RevealCollectible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_CollectibleBase);
	UClass* Z_Construct_UClass_ATP_CollectibleBase_NoRegister()
	{
		return ATP_CollectibleBase::StaticClass();
	}
	struct Z_Construct_UClass_ATP_CollectibleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collectibleID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_collectibleID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_collectibleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collectibleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_collectibleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collectSoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collectSoundEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collectibleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collectibleMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_CollectibleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_CollectibleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleMesh, "GetCollectibleMesh" }, // 637986293
		{ &Z_Construct_UFunction_ATP_CollectibleBase_GetCollectibleType, "GetCollectibleType" }, // 1490631611
		{ &Z_Construct_UFunction_ATP_CollectibleBase_HideCollectible, "HideCollectible" }, // 2320599292
		{ &Z_Construct_UFunction_ATP_CollectibleBase_RevealCollectible, "RevealCollectible" }, // 3780681159
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_CollectibleBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collectible/TP_CollectibleBase.h" },
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleID_MetaData[] = {
		{ "Category", "TP_CollectibleBase" },
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleID = { "collectibleID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_CollectibleBase, collectibleID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleID_MetaData), Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType_MetaData[] = {
		{ "Category", "TP_CollectibleBase" },
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType = { "collectibleType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_CollectibleBase, collectibleType), Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType_MetaData), Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType_MetaData) }; // 3620290035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectSoundEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_CollectibleBase" },
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectSoundEffect = { "collectSoundEffect", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_CollectibleBase, collectSoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectSoundEffect_MetaData), Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectSoundEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collectible Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectible/TP_CollectibleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleMesh = { "collectibleMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_CollectibleBase, collectibleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleMesh_MetaData), Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_CollectibleBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectSoundEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_CollectibleBase_Statics::NewProp_collectibleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_CollectibleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_CollectibleBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_CollectibleBase_Statics::ClassParams = {
		&ATP_CollectibleBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_CollectibleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_CollectibleBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_CollectibleBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_CollectibleBase()
	{
		if (!Z_Registration_Info_UClass_ATP_CollectibleBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_CollectibleBase.OuterSingleton, Z_Construct_UClass_ATP_CollectibleBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_CollectibleBase.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_CollectibleBase>()
	{
		return ATP_CollectibleBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_CollectibleBase);
	ATP_CollectibleBase::~ATP_CollectibleBase() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Collectible_TP_CollectibleBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Collectible_TP_CollectibleBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_CollectibleBase, ATP_CollectibleBase::StaticClass, TEXT("ATP_CollectibleBase"), &Z_Registration_Info_UClass_ATP_CollectibleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_CollectibleBase), 1734960086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Collectible_TP_CollectibleBase_h_3855658282(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Collectible_TP_CollectibleBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Collectible_TP_CollectibleBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
