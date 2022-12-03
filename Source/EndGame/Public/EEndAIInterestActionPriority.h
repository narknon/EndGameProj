#pragma once
#include "CoreMinimal.h"
#include "EEndAIInterestActionPriority.generated.h"

UENUM(BlueprintType)
enum class EEndAIInterestActionPriority : uint8 {
    DEFAULT,
    HIGH,
    Priority_Max,
};

