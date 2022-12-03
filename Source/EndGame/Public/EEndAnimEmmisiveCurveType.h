#pragma once
#include "CoreMinimal.h"
#include "EEndAnimEmmisiveCurveType.generated.h"

UENUM(BlueprintType)
enum class EEndAnimEmmisiveCurveType : uint8 {
    Intensity,
    ColorX,
    ColorY,
    ColorZ,
    Max,
};

