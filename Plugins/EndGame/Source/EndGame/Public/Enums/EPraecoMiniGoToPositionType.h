#pragma once
#include "CoreMinimal.h"
#include "EPraecoMiniGoToPositionType.generated.h"

UENUM()
enum class EPraecoMiniGoToPositionType : uint8 {
    Front,
    LeftSide,
    RightSide,
    Back,
    Max,
};

