#pragma once
#include "CoreMinimal.h"
#include "EEndTarzanJumpType.generated.h"

UENUM(BlueprintType)
enum class EEndTarzanJumpType : uint8 {
    Chandelier,
    ChandelierCross,
    ChandelierCrossEnd,
    Rope,
    RopeSmall,
    MAX,
    None,
};

