#pragma once
#include "CoreMinimal.h"
#include "ERufusGoToPositionType.generated.h"

UENUM()
enum class ERufusGoToPositionType : uint8 {
    Front,
    LeftSide,
    RightSide,
    Max,
};

