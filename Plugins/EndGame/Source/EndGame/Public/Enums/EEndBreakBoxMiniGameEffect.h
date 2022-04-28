#pragma once
#include "CoreMinimal.h"
#include "EEndBreakBoxMiniGameEffect.generated.h"

UENUM()
enum class EEndBreakBoxMiniGameEffect : uint8 {
    BREAK,
    ATB_DROP,
    ATB_DRAIN,
    ATB_RECOVER,
    MAX,
};

