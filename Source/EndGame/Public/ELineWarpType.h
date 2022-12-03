#pragma once
#include "CoreMinimal.h"
#include "ELineWarpType.generated.h"

UENUM(BlueprintType)
enum class ELineWarpType : uint8 {
    None,
    Approach,
    Escape,
    Straight,
    Drop,
    Point,
    Max,
};

