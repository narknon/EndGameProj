#pragma once
#include "CoreMinimal.h"
#include "ETriggerBoxCondition.generated.h"

UENUM(BlueprintType)
enum class ETriggerBoxCondition : uint8 {
    OutSide,
    InSide,
};

