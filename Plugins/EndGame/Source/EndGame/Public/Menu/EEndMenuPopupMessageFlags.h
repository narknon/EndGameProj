#pragma once
#include "CoreMinimal.h"
#include "EEndMenuPopupMessageFlags.generated.h"

UENUM(Blueprintable)
enum class EEndMenuPopupMessageFlags : uint8 {
    None,
    Critical,
    OverTime,
    Guarded,
    Chain,
    Area,
    Whack,
    Burst,
    AttributeWeak,
};

