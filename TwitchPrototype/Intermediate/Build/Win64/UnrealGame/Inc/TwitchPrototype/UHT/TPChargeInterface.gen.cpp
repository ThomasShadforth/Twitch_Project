// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Interaction/TPChargeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPChargeInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPChargeInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPChargeInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPChargeInterface::execObjectChargedInto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectChargedInto_Implementation();
		P_NATIVE_END;
	}
	void ITPChargeInterface::ObjectChargedInto()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ObjectChargedInto instead.");
	}
	void UTPChargeInterface::StaticRegisterNativesUTPChargeInterface()
	{
		UClass* Class = UTPChargeInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ObjectChargedInto", &ITPChargeInterface::execObjectChargedInto },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPChargeInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPChargeInterface, nullptr, "ObjectChargedInto", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPChargeInterface);
	UClass* Z_Construct_UClass_UTPChargeInterface_NoRegister()
	{
		return UTPChargeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPChargeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPChargeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPChargeInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPChargeInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPChargeInterface_ObjectChargedInto, "ObjectChargedInto" }, // 305662722
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPChargeInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPChargeInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPChargeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPChargeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPChargeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPChargeInterface_Statics::ClassParams = {
		&UTPChargeInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPChargeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPChargeInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPChargeInterface()
	{
		if (!Z_Registration_Info_UClass_UTPChargeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPChargeInterface.OuterSingleton, Z_Construct_UClass_UTPChargeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPChargeInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPChargeInterface>()
	{
		return UTPChargeInterface::StaticClass();
	}
	UTPChargeInterface::UTPChargeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPChargeInterface);
	UTPChargeInterface::~UTPChargeInterface() {}
	static FName NAME_UTPChargeInterface_ObjectChargedInto = FName(TEXT("ObjectChargedInto"));
	void ITPChargeInterface::Execute_ObjectChargedInto(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPChargeInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTPChargeInterface_ObjectChargedInto);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITPChargeInterface*)(O->GetNativeInterfaceAddress(UTPChargeInterface::StaticClass())))
		{
			I->ObjectChargedInto_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPChargeInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPChargeInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPChargeInterface, UTPChargeInterface::StaticClass, TEXT("UTPChargeInterface"), &Z_Registration_Info_UClass_UTPChargeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPChargeInterface), 3836699471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPChargeInterface_h_3479483586(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPChargeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPChargeInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
