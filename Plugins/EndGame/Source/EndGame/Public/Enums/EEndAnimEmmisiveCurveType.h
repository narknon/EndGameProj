#pragma once
#include "CoreMinimal.h"
#include "EEndAnimEmmisiveCurveType.generated.h"

UENUM()
enum class EEndAnimEmmisiveCurveType {
    Intensity,
    ColorX,
    ColorY,
    ColorZ,
    Max,
};

