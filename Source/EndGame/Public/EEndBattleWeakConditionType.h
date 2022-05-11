#pragma once
#include "CoreMinimal.h"
#include "EEndBattleWeakConditionType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleWeakConditionType : uint8 {
    Anything,
    Fire,
    Ice,
    Thunder,
    Wind,
    Earth,
    Holy,
    Dark,
    Stun,
    Physics,
    Magic,
    MagicNoElement,
    AnythingEx,
    HealDamage,
    Max,
};

