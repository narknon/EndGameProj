#pragma once
#include "CoreMinimal.h"
#include "EEndBreakBoxMiniGameBoxType.generated.h"

UENUM(BlueprintType)
enum class EEndBreakBoxMiniGameBoxType : uint8 {
    NORMAL,
    ABILITY,
    HIGH_GREAD,
    HIGH_GREAD_L,
    PLUS_NORMAL,
    PLUS_PHYSICAL,
    PLUS_MAGIC,
    PLUS_TIME,
    PLUS_TIME_PHYS,
    PLUS_PHYSICAL_PHYS,
    PLUS_MAGIC_PHYS,
    MAX,
};

