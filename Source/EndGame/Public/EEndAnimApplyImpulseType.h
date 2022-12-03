#pragma once
#include "CoreMinimal.h"
#include "EEndAnimApplyImpulseType.generated.h"

UENUM(BlueprintType)
enum class EEndAnimApplyImpulseType : uint8 {
    Default,
    Melee,
    Bullet,
};

