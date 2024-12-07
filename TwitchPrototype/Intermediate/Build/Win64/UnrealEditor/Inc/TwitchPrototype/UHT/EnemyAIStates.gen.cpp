// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/EnemyAIStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIStates() {}
// Cross Module References
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyAIStates;
	static UEnum* EEnemyAIStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyAIStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyAIStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates, (UObject*)Z_Construct_UPackage__Script_TwitchPrototype(), TEXT("EEnemyAIStates"));
		}
		return Z_Registration_Info_UEnum_EEnemyAIStates.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<EEnemyAIStates>()
	{
		return EEnemyAIStates_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enumerators[] = {
		{ "EEnemyAIStates::EEAIS_Passive", (int64)EEnemyAIStates::EEAIS_Passive },
		{ "EEnemyAIStates::EEAIS_Attack", (int64)EEnemyAIStates::EEAIS_Attack },
		{ "EEnemyAIStates::EEAIS_Frozen", (int64)EEnemyAIStates::EEAIS_Frozen },
		{ "EEnemyAIStates::EEAIS_Investigating", (int64)EEnemyAIStates::EEAIS_Investigating },
		{ "EEnemyAIStates::EEAIS_Dead", (int64)EEnemyAIStates::EEAIS_Dead },
		{ "EEnemyAIStates::EEAIS_Cower", (int64)EEnemyAIStates::EEAIS_Cower },
		{ "EEnemyAIStates::EEAIS_Retreat", (int64)EEnemyAIStates::EEAIS_Retreat },
		{ "EEnemyAIStates::EEAIS_MAX", (int64)EEnemyAIStates::EEAIS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EEAIS_Attack.DisplayName", "Attack" },
		{ "EEAIS_Attack.Name", "EEnemyAIStates::EEAIS_Attack" },
		{ "EEAIS_Cower.DisplayName", "Cower" },
		{ "EEAIS_Cower.Name", "EEnemyAIStates::EEAIS_Cower" },
		{ "EEAIS_Dead.DisplayName", "Dead" },
		{ "EEAIS_Dead.Name", "EEnemyAIStates::EEAIS_Dead" },
		{ "EEAIS_Frozen.DisplayName", "Frozen" },
		{ "EEAIS_Frozen.Name", "EEnemyAIStates::EEAIS_Frozen" },
		{ "EEAIS_Investigating.DisplayName", "Investigating" },
		{ "EEAIS_Investigating.Name", "EEnemyAIStates::EEAIS_Investigating" },
		{ "EEAIS_MAX.DisplayName", "DefaultMAX" },
		{ "EEAIS_MAX.Name", "EEnemyAIStates::EEAIS_MAX" },
		{ "EEAIS_Passive.DisplayName", "Passive" },
		{ "EEAIS_Passive.Name", "EEnemyAIStates::EEAIS_Passive" },
		{ "EEAIS_Retreat.DisplayName", "Retreat" },
		{ "EEAIS_Retreat.Name", "EEnemyAIStates::EEAIS_Retreat" },
		{ "ModuleRelativePath", "Public/EnemyAIStates.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype,
		nullptr,
		"EEnemyAIStates",
		"EEnemyAIStates",
		Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates()
	{
		if (!Z_Registration_Info_UEnum_EEnemyAIStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyAIStates.InnerSingleton, Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyAIStates.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h_Statics::EnumInfo[] = {
		{ EEnemyAIStates_StaticEnum, TEXT("EEnemyAIStates"), &Z_Registration_Info_UEnum_EEnemyAIStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919731625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h_3170189741(TEXT("/Script/TwitchPrototype"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
