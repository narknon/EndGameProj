#pragma once
#include "CoreMinimal.h"
#include "BattleModeStep.generated.h"

UENUM()
enum class BattleModeStep {
    Normal,
    Warning,
    ToAggressive,
    Aggressive,
    Escaping,
    EscapingWait,
    ExitBattleSceneWait,
    BattleModeStep_StepMax,
};

