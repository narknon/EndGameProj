#pragma once
#include "CoreMinimal.h"
#include "EBikeLoccheAttackType.generated.h"

UENUM(BlueprintType)
enum class EBikeLoccheAttackType : uint8 {
    None,
    Melee,
    Smash,
    Shot,
    Stamp,
    Provoke,
    Bridge,
};

