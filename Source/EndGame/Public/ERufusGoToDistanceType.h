#pragma once
#include "CoreMinimal.h"
#include "ERufusGoToDistanceType.generated.h"

UENUM(BlueprintType)
enum class ERufusGoToDistanceType : uint8 {
    Short,
    Middle,
    Long,
    Max,
};

