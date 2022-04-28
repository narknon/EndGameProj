#pragma once
#include "CoreMinimal.h"
#include "EEndHandConstraint.generated.h"

UENUM()
enum class EEndHandConstraint : uint8 {
    None,
    ManualPlacement,
    ManualTransform,
    ManualTransformWithForwadAndUpVector,
    LockPlacement,
    LockTransform,
    LockTransformToParentSocket,
    LockTransformToOtherSocketNew,
    LockTransformToOtherSocket,
    Vehicle,
};

