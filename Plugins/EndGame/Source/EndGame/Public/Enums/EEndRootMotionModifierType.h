#pragma once
#include "CoreMinimal.h"
#include "EEndRootMotionModifierType.generated.h"

UENUM()
enum class EEndRootMotionModifierType {
    None,
    FieldAction,
    TalkControl,
    BattleAction,
    BattleMove,
    BattleAbility,
    CharaSpec,
    Notify,
    FieldAI,
    Dash,
    MoveTo,
    Debug,
};

