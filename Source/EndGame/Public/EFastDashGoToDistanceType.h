#pragma once
#include "CoreMinimal.h"
#include "EFastDashGoToDistanceType.generated.h"

UENUM(BlueprintType)
enum class EFastDashGoToDistanceType : uint8 {
    Short,
    Middle,
    Long,
    Max,
};

