// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/MoveSpeedTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveSpeedTypes() {}
// Cross Module References
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveSpeedTypes;
	static UEnum* EMoveSpeedTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoveSpeedTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoveSpeedTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes, (UObject*)Z_Construct_UPackage__Script_TwitchPrototype(), TEXT("EMoveSpeedTypes"));
		}
		return Z_Registration_Info_UEnum_EMoveSpeedTypes.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<EMoveSpeedTypes>()
	{
		return EMoveSpeedTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enumerators[] = {
		{ "EMoveSpeedTypes::EMST_Idle", (int64)EMoveSpeedTypes::EMST_Idle },
		{ "EMoveSpeedTypes::EMST_Walk", (int64)EMoveSpeedTypes::EMST_Walk },
		{ "EMoveSpeedTypes::EMST_Jog", (int64)EMoveSpeedTypes::EMST_Jog },
		{ "EMoveSpeedTypes::EMST_Sprint", (int64)EMoveSpeedTypes::EMST_Sprint },
		{ "EMoveSpeedTypes::EMST_MAX", (int64)EMoveSpeedTypes::EMST_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMST_Idle.DisplayName", "Idle" },
		{ "EMST_Idle.Name", "EMoveSpeedTypes::EMST_Idle" },
		{ "EMST_Jog.DisplayName", "Jog" },
		{ "EMST_Jog.Name", "EMoveSpeedTypes::EMST_Jog" },
		{ "EMST_MAX.DisplayName", "DefaultMAX" },
		{ "EMST_MAX.Name", "EMoveSpeedTypes::EMST_MAX" },
		{ "EMST_Sprint.DisplayName", "Sprint" },
		{ "EMST_Sprint.Name", "EMoveSpeedTypes::EMST_Sprint" },
		{ "EMST_Walk.DisplayName", "Walk" },
		{ "EMST_Walk.Name", "EMoveSpeedTypes::EMST_Walk" },
		{ "ModuleRelativePath", "Public/MoveSpeedTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype,
		nullptr,
		"EMoveSpeedTypes",
		"EMoveSpeedTypes",
		Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes()
	{
		if (!Z_Registration_Info_UEnum_EMoveSpeedTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveSpeedTypes.InnerSingleton, Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoveSpeedTypes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h_Statics::EnumInfo[] = {
		{ EMoveSpeedTypes_StaticEnum, TEXT("EMoveSpeedTypes"), &Z_Registration_Info_UEnum_EMoveSpeedTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1366844636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h_3959859356(TEXT("/Script/TwitchPrototype"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
