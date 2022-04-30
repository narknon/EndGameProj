#pragma once
#include "CoreMinimal.h"
#include "EEndAiMoveType.generated.h"

UENUM()
enum class EEndAiMoveType : uint8 {
    RUN,
    DASH,
    WALK,
    HIGHWALK,
    JOG,
    MAX,
};

