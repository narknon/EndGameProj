#pragma once
#include "CoreMinimal.h"
#include "BattleStep.generated.h"

UENUM()
enum class BattleStep {
    NormalStep,
    EscapingStep,
    WarningStep,
    AggressiveStep,
    BattleModeStepMax,
};

