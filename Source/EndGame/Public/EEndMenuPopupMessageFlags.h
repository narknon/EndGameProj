#pragma once
#include "CoreMinimal.h"
#include "EEndMenuPopupMessageFlags.generated.h"

UENUM(BlueprintType)
enum class EEndMenuPopupMessageFlags : uint8 {
    None,
    Critical,
    OverTime,
    Guarded = 0x4,
    Chain = 0x8,
    Area = 0x10,
    Whack = 0x20,
    Burst = 0x40,
    AttributeWeak = 0x80,
};

