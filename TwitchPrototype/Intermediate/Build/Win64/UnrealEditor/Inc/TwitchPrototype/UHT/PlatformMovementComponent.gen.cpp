// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/PlatformMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UPlatformMovementComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UPlatformMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformMovementComponent::execMovementEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformMovementComponent::execMovementUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	void UPlatformMovementComponent::StaticRegisterNativesUPlatformMovementComponent()
	{
		UClass* Class = UPlatformMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovementEnd", &UPlatformMovementComponent::execMovementEnd },
			{ "MovementUpdate", &UPlatformMovementComponent::execMovementUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformMovementComponent, nullptr, "MovementEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics
	{
		struct PlatformMovementComponent_eventMovementUpdate_Parms
		{
			float Alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformMovementComponent_eventMovementUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformMovementComponent, nullptr, "MovementUpdate", nullptr, nullptr, Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PlatformMovementComponent_eventMovementUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::PlatformMovementComponent_eventMovementUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformMovementComponent);
	UClass* Z_Construct_UClass_UPlatformMovementComponent_NoRegister()
	{
		return UPlatformMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldWait_MetaData[];
#endif
		static void NewProp_bShouldWait_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldWait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platformWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_platformWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endPositionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_endPositionWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_movementCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformMovementComponent_MovementEnd, "MovementEnd" }, // 4181151626
		{ &Z_Construct_UFunction_UPlatformMovementComponent_MovementUpdate, "MovementUpdate" }, // 3799651082
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlatformMovementComponent.h" },
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait_SetBit(void* Obj)
	{
		((UPlatformMovementComponent*)Obj)->bShouldWait = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait = { "bShouldWait", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlatformMovementComponent), &Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait_MetaData), Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_platformWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_platformWaitTime = { "platformWaitTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformMovementComponent, platformWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_platformWaitTime_MetaData), Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_platformWaitTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_endPositionWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlatformMovementComponent" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_endPositionWidget = { "endPositionWidget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformMovementComponent, endPositionWidget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_endPositionWidget_MetaData), Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_endPositionWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_movementCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Stretch" },
		{ "ModuleRelativePath", "PlatformMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_movementCurve = { "movementCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformMovementComponent, movementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_movementCurve_MetaData), Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_movementCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_bShouldWait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_platformWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_endPositionWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMovementComponent_Statics::NewProp_movementCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformMovementComponent_Statics::ClassParams = {
		&UPlatformMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlatformMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UPlatformMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformMovementComponent.OuterSingleton, Z_Construct_UClass_UPlatformMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformMovementComponent.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UPlatformMovementComponent>()
	{
		return UPlatformMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMovementComponent);
	UPlatformMovementComponent::~UPlatformMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_PlatformMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_PlatformMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformMovementComponent, UPlatformMovementComponent::StaticClass, TEXT("UPlatformMovementComponent"), &Z_Registration_Info_UClass_UPlatformMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformMovementComponent), 3945464819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_PlatformMovementComponent_h_2319048487(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_PlatformMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_PlatformMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
