#pragma once
#include "CoreMinimal.h"
#include "EEndBizarreBugWallMoveType.generated.h"

UENUM(BlueprintType)
enum class EEndBizarreBugWallMoveType : uint8 {
    Direction,
    Spline,
    SplineAndUpVector,
};

