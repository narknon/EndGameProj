#pragma once
#include "CoreMinimal.h"
#include "EEndExtraActionLayer.generated.h"

UENUM()
enum class EEndExtraActionLayer : uint8 {
    HighPriority,
    Default,
    LowPriority,
    NonExtraAction,
};

