#pragma once
#include "CoreMinimal.h"
#include "EEndTarzanJumpType.generated.h"

UENUM()
enum class EEndTarzanJumpType : uint8 {
    Chandelier,
    ChandelierCross,
    ChandelierCrossEnd,
    Rope,
    RopeSmall,
    MAX,
    None,
};

