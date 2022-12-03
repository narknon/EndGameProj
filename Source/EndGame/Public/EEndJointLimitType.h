#pragma once
#include "CoreMinimal.h"
#include "EEndJointLimitType.generated.h"

UENUM(BlueprintType)
enum class EEndJointLimitType : uint8 {
    Free,
    Swing,
    Swing2,
    Euler,
    Hinge,
};

