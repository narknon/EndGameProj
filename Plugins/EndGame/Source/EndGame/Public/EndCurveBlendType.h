#pragma once
#include "CoreMinimal.h"
#include "EndCurveBlendType.generated.h"

UENUM()
enum EndCurveBlendType {
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

