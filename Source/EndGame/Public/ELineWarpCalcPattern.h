#pragma once
#include "CoreMinimal.h"
#include "ELineWarpCalcPattern.generated.h"

UENUM(BlueprintType)
enum class ELineWarpCalcPattern : uint8 {
    None,
    UpperLocation,
    Max,
};

