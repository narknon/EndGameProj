#pragma once
#include "CoreMinimal.h"
#include "ELineWarpType.generated.h"

UENUM()
enum class ELineWarpType : uint8 {
    None,
    Approach,
    Escape,
    Straight,
    Drop,
    Point,
    Max,
};

