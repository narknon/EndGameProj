#pragma once
#include "CoreMinimal.h"
#include "EEndBikeRotateYawType.generated.h"

UENUM()
enum class EEndBikeRotateYawType : uint8 {
    None,
    LookAtTarget,
    KeepRelativeOffset,
    LookAtDamageSourceTarget,
};

