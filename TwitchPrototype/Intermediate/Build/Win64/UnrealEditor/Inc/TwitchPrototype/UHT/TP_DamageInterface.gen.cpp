// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_DamageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_DamageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_DamageInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_DamageInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITP_DamageInterface::execDamageHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageHit_Implementation();
		P_NATIVE_END;
	}
	void ITP_DamageInterface::DamageHit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DamageHit instead.");
	}
	void UTP_DamageInterface::StaticRegisterNativesUTP_DamageInterface()
	{
		UClass* Class = UTP_DamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageHit", &ITP_DamageInterface::execDamageHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TP_DamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_DamageInterface, nullptr, "DamageHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTP_DamageInterface_DamageHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_DamageInterface_DamageHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_DamageInterface);
	UClass* Z_Construct_UClass_UTP_DamageInterface_NoRegister()
	{
		return UTP_DamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTP_DamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_DamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_DamageInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_DamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_DamageInterface_DamageHit, "DamageHit" }, // 107629739
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_DamageInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_DamageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TP_DamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_DamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITP_DamageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_DamageInterface_Statics::ClassParams = {
		&UTP_DamageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_DamageInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_DamageInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTP_DamageInterface()
	{
		if (!Z_Registration_Info_UClass_UTP_DamageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_DamageInterface.OuterSingleton, Z_Construct_UClass_UTP_DamageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_DamageInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_DamageInterface>()
	{
		return UTP_DamageInterface::StaticClass();
	}
	UTP_DamageInterface::UTP_DamageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_DamageInterface);
	UTP_DamageInterface::~UTP_DamageInterface() {}
	static FName NAME_UTP_DamageInterface_DamageHit = FName(TEXT("DamageHit"));
	void ITP_DamageInterface::Execute_DamageHit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTP_DamageInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTP_DamageInterface_DamageHit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITP_DamageInterface*)(O->GetNativeInterfaceAddress(UTP_DamageInterface::StaticClass())))
		{
			I->DamageHit_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_DamageInterface, UTP_DamageInterface::StaticClass, TEXT("UTP_DamageInterface"), &Z_Registration_Info_UClass_UTP_DamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_DamageInterface), 462784783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_4165124494(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
