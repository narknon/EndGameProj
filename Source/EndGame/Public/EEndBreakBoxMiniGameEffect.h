#pragma once
#include "CoreMinimal.h"
#include "EEndBreakBoxMiniGameEffect.generated.h"

UENUM(BlueprintType)
enum class EEndBreakBoxMiniGameEffect : uint8 {
    BREAK,
    ATB_DROP,
    ATB_DRAIN,
    ATB_RECOVER,
    MAX,
};

