// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/CustomCharacterMv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCharacterMv() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UCustomCharacterMv();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UCustomCharacterMv_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void UCustomCharacterMv::StaticRegisterNativesUCustomCharacterMv()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomCharacterMv);
	UClass* Z_Construct_UClass_UCustomCharacterMv_NoRegister()
	{
		return UCustomCharacterMv::StaticClass();
	}
	struct Z_Construct_UClass_UCustomCharacterMv_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpingGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpingGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fallingGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fallingGravityScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomCharacterMv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCharacterMv_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomCharacterMv.h" },
		{ "ModuleRelativePath", "CustomCharacterMv.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_jumpingGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomCharacterMv" },
		{ "ModuleRelativePath", "CustomCharacterMv.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_jumpingGravityScale = { "jumpingGravityScale", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomCharacterMv, jumpingGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_jumpingGravityScale_MetaData), Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_jumpingGravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_fallingGravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomCharacterMv" },
		{ "ModuleRelativePath", "CustomCharacterMv.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_fallingGravityScale = { "fallingGravityScale", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomCharacterMv, fallingGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_fallingGravityScale_MetaData), Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_fallingGravityScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomCharacterMv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_jumpingGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCharacterMv_Statics::NewProp_fallingGravityScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomCharacterMv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCharacterMv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomCharacterMv_Statics::ClassParams = {
		&UCustomCharacterMv::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomCharacterMv_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomCharacterMv_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCharacterMv_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomCharacterMv()
	{
		if (!Z_Registration_Info_UClass_UCustomCharacterMv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomCharacterMv.OuterSingleton, Z_Construct_UClass_UCustomCharacterMv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomCharacterMv.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UCustomCharacterMv>()
	{
		return UCustomCharacterMv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCharacterMv);
	UCustomCharacterMv::~UCustomCharacterMv() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_CustomCharacterMv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_CustomCharacterMv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomCharacterMv, UCustomCharacterMv::StaticClass, TEXT("UCustomCharacterMv"), &Z_Registration_Info_UClass_UCustomCharacterMv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomCharacterMv), 2269476559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_CustomCharacterMv_h_1294369402(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_CustomCharacterMv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_CustomCharacterMv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
