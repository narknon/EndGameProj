#pragma once
#include "CoreMinimal.h"
#include "EJumpType.generated.h"

UENUM(BlueprintType)
enum class EJumpType : uint8 {
    JumpOff,
    JumpOver,
    straddle,
    JumpOn,
};

