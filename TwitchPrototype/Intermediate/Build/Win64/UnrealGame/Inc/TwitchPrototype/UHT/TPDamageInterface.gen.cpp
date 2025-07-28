// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Interaction/TPDamageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPDamageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDamageInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDamageInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPDamageInterface::execDamageCharacter)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_PROPERTY(FFloatProperty,Z_Param_KnockbackModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageCharacter_Implementation(Z_Param_DamageCauser,Z_Param_KnockbackModifier);
		P_NATIVE_END;
	}
	struct TPDamageInterface_eventDamageCharacter_Parms
	{
		AActor* DamageCauser;
		float KnockbackModifier;
	};
	void ITPDamageInterface::DamageCharacter(AActor* DamageCauser, float KnockbackModifier)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DamageCharacter instead.");
	}
	void UTPDamageInterface::StaticRegisterNativesUTPDamageInterface()
	{
		UClass* Class = UTPDamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageCharacter", &ITPDamageInterface::execDamageCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPDamageInterface_eventDamageCharacter_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::NewProp_KnockbackModifier = { "KnockbackModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPDamageInterface_eventDamageCharacter_Parms, KnockbackModifier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::NewProp_KnockbackModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_KnockbackModifier", "0.000000" },
		{ "ModuleRelativePath", "Public/Interaction/TPDamageInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPDamageInterface, nullptr, "DamageCharacter", nullptr, nullptr, Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::PropPointers), sizeof(TPDamageInterface_eventDamageCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPDamageInterface_eventDamageCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPDamageInterface_DamageCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPDamageInterface_DamageCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPDamageInterface);
	UClass* Z_Construct_UClass_UTPDamageInterface_NoRegister()
	{
		return UTPDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDamageInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPDamageInterface_DamageCharacter, "DamageCharacter" }, // 1980854128
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDamageInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPDamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPDamageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPDamageInterface_Statics::ClassParams = {
		&UTPDamageInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDamageInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPDamageInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPDamageInterface()
	{
		if (!Z_Registration_Info_UClass_UTPDamageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPDamageInterface.OuterSingleton, Z_Construct_UClass_UTPDamageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPDamageInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPDamageInterface>()
	{
		return UTPDamageInterface::StaticClass();
	}
	UTPDamageInterface::UTPDamageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPDamageInterface);
	UTPDamageInterface::~UTPDamageInterface() {}
	static FName NAME_UTPDamageInterface_DamageCharacter = FName(TEXT("DamageCharacter"));
	void ITPDamageInterface::Execute_DamageCharacter(UObject* O, AActor* DamageCauser, float KnockbackModifier)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPDamageInterface::StaticClass()));
		TPDamageInterface_eventDamageCharacter_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPDamageInterface_DamageCharacter);
		if (Func)
		{
			Parms.DamageCauser=DamageCauser;
			Parms.KnockbackModifier=KnockbackModifier;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPDamageInterface*)(O->GetNativeInterfaceAddress(UTPDamageInterface::StaticClass())))
		{
			I->DamageCharacter_Implementation(DamageCauser,KnockbackModifier);
		}
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPDamageInterface, UTPDamageInterface::StaticClass, TEXT("UTPDamageInterface"), &Z_Registration_Info_UClass_UTPDamageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPDamageInterface), 1129312699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_966460220(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
