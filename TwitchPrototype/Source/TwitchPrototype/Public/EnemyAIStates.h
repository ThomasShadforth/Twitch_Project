#pragma once

UENUM(BlueprintType)
enum class EEnemyAIStates : uint8
{
	EEAIS_Passive UMETA(DisplayName = "Passive"),
	EEAIS_Attack UMETA(DisplayName = "Attack"),
	EEAIS_Frozen UMETA(DisplayName = "Frozen"),
	EEAIS_Investigating UMETA(DisplayName = "Investigating"),
	EEAIS_Dead UMETA(DisplayName = "Dead"),
	EEAIS_Cower UMETA(DisplayName = "Cower"),
	EEAIS_Retreat UMETA(DisplayName = "Retreat"),
	EEAIS_MAX UMETA(DisplayName = "DefaultMAX")
};