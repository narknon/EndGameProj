#pragma once
#include "CoreMinimal.h"
#include "EEndRootMotionModifierType.generated.h"

UENUM(BlueprintType)
enum class EEndRootMotionModifierType : uint8 {
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

