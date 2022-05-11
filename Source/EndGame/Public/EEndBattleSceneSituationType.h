#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSceneSituationType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleSceneSituationType : uint8 {
    None,
    Event,
    Serious,
};

