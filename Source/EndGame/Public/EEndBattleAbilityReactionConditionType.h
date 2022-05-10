#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAbilityReactionConditionType.generated.h"

UENUM()
enum class EEndBattleAbilityReactionConditionType : uint8 {
    None,
    Hit,
    Guard,
    TargetDodge,
    TargetDodgeDirection,
    NotTargetFrontAndNear,
    Damage,
    NotifyAIBP,
    NormalAttackDamage,
    TargetDodgeAngle,
    TargetIsInvincible,
};

