#pragma once
#include "CoreMinimal.h"
#include "EEndRailCameraCurveType.generated.h"

UENUM(BlueprintType)
enum class EEndRailCameraCurveType : uint8 {
    Linear,
    Curve,
    SlowInFastOut,
    FastInSlowOut,
    Hermite,
    SlowInSlowOut,
    SlowInSlowOutCirc,
    SlowOutExpo,
    FastInExpo,
    CurveBlendTypeMax,
};

