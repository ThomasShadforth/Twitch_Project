// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/CollectibleTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectibleTypes() {}
// Cross Module References
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollectibleTypes;
	static UEnum* ECollectibleTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectibleTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollectibleTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes, (UObject*)Z_Construct_UPackage__Script_TwitchPrototype(), TEXT("ECollectibleTypes"));
		}
		return Z_Registration_Info_UEnum_ECollectibleTypes.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<ECollectibleTypes>()
	{
		return ECollectibleTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enumerators[] = {
		{ "ECollectibleTypes::ECT_Primary", (int64)ECollectibleTypes::ECT_Primary },
		{ "ECollectibleTypes::ECT_Secondary", (int64)ECollectibleTypes::ECT_Secondary },
		{ "ECollectibleTypes::ECT_MAX", (int64)ECollectibleTypes::ECT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECT_MAX.DisplayName", "DefaultMAX" },
		{ "ECT_MAX.Name", "ECollectibleTypes::ECT_MAX" },
		{ "ECT_Primary.DisplayName", "Primary Collectible" },
		{ "ECT_Primary.Name", "ECollectibleTypes::ECT_Primary" },
		{ "ECT_Secondary.DisplayName", "Secondary Collectible" },
		{ "ECT_Secondary.Name", "ECollectibleTypes::ECT_Secondary" },
		{ "ModuleRelativePath", "Public/CollectibleTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype,
		nullptr,
		"ECollectibleTypes",
		"ECollectibleTypes",
		Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes()
	{
		if (!Z_Registration_Info_UEnum_ECollectibleTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollectibleTypes.InnerSingleton, Z_Construct_UEnum_TwitchPrototype_ECollectibleTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollectibleTypes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h_Statics::EnumInfo[] = {
		{ ECollectibleTypes_StaticEnum, TEXT("ECollectibleTypes"), &Z_Registration_Info_UEnum_ECollectibleTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3620290035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h_3438098962(TEXT("/Script/TwitchPrototype"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
