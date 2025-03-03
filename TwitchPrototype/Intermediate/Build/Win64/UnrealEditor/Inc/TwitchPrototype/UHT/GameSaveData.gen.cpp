// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Data/GameSaveData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSaveData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_CollectibleBase_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UGameSaveData();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UGameSaveData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UGameSaveData::StaticRegisterNativesUGameSaveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSaveData);
	UClass* Z_Construct_UClass_UGameSaveData_NoRegister()
	{
		return UGameSaveData::StaticClass();
	}
	struct Z_Construct_UClass_UGameSaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cheeseMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_cheeseMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheeseMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_cheeseMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fruitMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fruitMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fruitMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_fruitMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastSavedLevel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_lastSavedLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/GameSaveData.h" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::NewProp_playerState_MetaData[] = {
		{ "Category", "GameSaveData" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveData, playerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::NewProp_playerState_MetaData), Z_Construct_UClass_UGameSaveData_Statics::NewProp_playerState_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_ValueProp = { "cheeseMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ATP_CollectibleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_Key_KeyProp = { "cheeseMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_MetaData[] = {
		{ "Category", "GameSaveData" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap = { "cheeseMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveData, cheeseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_MetaData), Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_ValueProp = { "fruitMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ATP_CollectibleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_Key_KeyProp = { "fruitMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_MetaData[] = {
		{ "Category", "GameSaveData" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap = { "fruitMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveData, fruitMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_MetaData), Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::NewProp_lastSavedLevel_MetaData[] = {
		{ "Category", "GameSaveData" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_lastSavedLevel = { "lastSavedLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveData, lastSavedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::NewProp_lastSavedLevel_MetaData), Z_Construct_UClass_UGameSaveData_Statics::NewProp_lastSavedLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveData_Statics::NewProp_slotName_MetaData[] = {
		{ "Category", "GameSaveData" },
		{ "ModuleRelativePath", "Public/Data/GameSaveData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSaveData_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameSaveData, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::NewProp_slotName_MetaData), Z_Construct_UClass_UGameSaveData_Statics::NewProp_slotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_playerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_cheeseMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_fruitMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_lastSavedLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveData_Statics::NewProp_slotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSaveData_Statics::ClassParams = {
		&UGameSaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSaveData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameSaveData()
	{
		if (!Z_Registration_Info_UClass_UGameSaveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSaveData.OuterSingleton, Z_Construct_UClass_UGameSaveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSaveData.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UGameSaveData>()
	{
		return UGameSaveData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSaveData);
	UGameSaveData::~UGameSaveData() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_GameSaveData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_GameSaveData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSaveData, UGameSaveData::StaticClass, TEXT("UGameSaveData"), &Z_Registration_Info_UClass_UGameSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSaveData), 240412580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_GameSaveData_h_499476996(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_GameSaveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Data_GameSaveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
