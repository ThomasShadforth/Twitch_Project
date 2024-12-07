// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveSpeedTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHPROTOTYPE_MoveSpeedTypes_generated_h
#error "MoveSpeedTypes.generated.h already included, missing '#pragma once' in MoveSpeedTypes.h"
#endif
#define TWITCHPROTOTYPE_MoveSpeedTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_MoveSpeedTypes_h


#define FOREACH_ENUM_EMOVESPEEDTYPES(op) \
	op(EMoveSpeedTypes::EMST_Idle) \
	op(EMoveSpeedTypes::EMST_Walk) \
	op(EMoveSpeedTypes::EMST_Jog) \
	op(EMoveSpeedTypes::EMST_Sprint) 

enum class EMoveSpeedTypes : uint8;
template<> struct TIsUEnumClass<EMoveSpeedTypes> { enum { Value = true }; };
template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<EMoveSpeedTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
