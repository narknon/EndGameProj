#pragma once
#include "CoreMinimal.h"
#include "EEndCutBattleCharaStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCutBattleCharaStateType : uint8 {
    None,
    Idle,
    Action,
    SimpleAction,
    Guard,
    GuardReaction,
    Dodge,
    Motion,
    SimpleMotion,
    Damage,
    SleepAerial,
    SleepFall,
    Sleep,
    Dead,
    Revive,
    Burst,
    UniqueAbility,
    Weak,
    Step,
    Fall,
    SetPlayAction,
    AerialNormalAttackJump,
    AerialNormalAttack,
    AerialNormalAttackFall,
    Max,
};

