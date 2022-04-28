#pragma once
#include "CoreMinimal.h"
#include "EEndAnimCurveType.generated.h"

UENUM()
enum class EEndAnimCurveType {
    LookAt_BlendAlpha,
    LookAt_SpeedBias,
    FootEffector_BlendAlpha,
    AutoSaccadeX,
    AutoSaccadeY,
    Max,
};

