#pragma once
#include "CoreMinimal.h"
#include "EEndCutBattleCharaStateType.generated.h"

UENUM()
enum class EEndCutBattleCharaStateType {
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

