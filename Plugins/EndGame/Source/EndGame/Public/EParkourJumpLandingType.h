#pragma once
#include "CoreMinimal.h"
#include "EParkourJumpLandingType.generated.h"

UENUM()
enum class EParkourJumpLandingType : uint8 {
    ParkourJumpLandingAuto,
    ParkourJumpLandingStand,
    ParkourJumpLandingRoll,
    ParkourJumpSlideDown,
};

