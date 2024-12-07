// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAIStates.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHPROTOTYPE_EnemyAIStates_generated_h
#error "EnemyAIStates.generated.h already included, missing '#pragma once' in EnemyAIStates.h"
#endif
#define TWITCHPROTOTYPE_EnemyAIStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_EnemyAIStates_h


#define FOREACH_ENUM_EENEMYAISTATES(op) \
	op(EEnemyAIStates::EEAIS_Passive) \
	op(EEnemyAIStates::EEAIS_Attack) \
	op(EEnemyAIStates::EEAIS_Frozen) \
	op(EEnemyAIStates::EEAIS_Investigating) \
	op(EEnemyAIStates::EEAIS_Dead) \
	op(EEnemyAIStates::EEAIS_Cower) \
	op(EEnemyAIStates::EEAIS_Retreat) 

enum class EEnemyAIStates : uint8;
template<> struct TIsUEnumClass<EEnemyAIStates> { enum { Value = true }; };
template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<EEnemyAIStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
