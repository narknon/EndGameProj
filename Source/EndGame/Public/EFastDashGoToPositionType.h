#pragma once
#include "CoreMinimal.h"
#include "EFastDashGoToPositionType.generated.h"

UENUM(BlueprintType)
enum class EFastDashGoToPositionType : uint8 {
    Front,
    LeftSide,
    RightSide,
    Max,
};

