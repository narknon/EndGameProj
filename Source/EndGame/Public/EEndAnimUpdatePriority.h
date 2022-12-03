#pragma once
#include "CoreMinimal.h"
#include "EEndAnimUpdatePriority.generated.h"

UENUM(BlueprintType)
enum class EEndAnimUpdatePriority : uint8 {
    Highest,
    High,
    Default,
    Low,
};

