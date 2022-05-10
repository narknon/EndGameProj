#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSceneSituationType.generated.h"

UENUM()
enum class EEndBattleSceneSituationType : uint8 {
    None,
    Event,
    Serious,
};

