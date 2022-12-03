#pragma once
#include "CoreMinimal.h"
#include "EEndAnimCurveType.generated.h"

UENUM(BlueprintType)
enum class EEndAnimCurveType : uint8 {
    LookAt_BlendAlpha,
    LookAt_SpeedBias,
    FootEffector_BlendAlpha,
    AutoSaccadeX,
    AutoSaccadeY,
    Max,
};

