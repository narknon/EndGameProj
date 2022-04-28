#pragma once
#include "CoreMinimal.h"
#include "EEndRailCameraCurveType.generated.h"

UENUM()
enum class EEndRailCameraCurveType {
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

