#pragma once
#include "CoreMinimal.h"
#include "EEndAnimUpdatePriority.generated.h"

UENUM()
enum class EEndAnimUpdatePriority {
    Highest,
    High,
    Default,
    Low,
};

