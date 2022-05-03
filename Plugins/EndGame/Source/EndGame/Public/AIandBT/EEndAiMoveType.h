#pragma once
#include "CoreMinimal.h"
#include "EEndAiMoveType.generated.h"

UENUM(Blueprintable)
enum class EEndAiMoveType : uint8 {
    RUN,
    DASH,
    WALK,
    HIGHWALK,
    JOG,
    MAX,
};

