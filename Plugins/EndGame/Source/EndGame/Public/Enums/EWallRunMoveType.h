#pragma once
#include "CoreMinimal.h"
#include "EWallRunMoveType.generated.h"

UENUM()
enum class EWallRunMoveType : uint8 {
    MoveOneWay_CW,
    MoveOneWay_CCW,
    MoveRoundTrip_CW,
    MoveRoundTrip_CCW,
};

