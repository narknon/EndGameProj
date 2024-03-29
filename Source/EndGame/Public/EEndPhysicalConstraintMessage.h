#pragma once
#include "CoreMinimal.h"
#include "EEndPhysicalConstraintMessage.generated.h"

UENUM(BlueprintType)
enum class EEndPhysicalConstraintMessage : uint8 {
    Deactivate,
    Activate,
    DisableGravity,
    EnableGravity,
    DisableForceResetVelocity,
    EnableForceResetVelocity,
    RequestReinitialize,
    DisableRandomVelocity,
    EnableRandomVelocity,
};

