#pragma once
#include "CoreMinimal.h"
#include "EEndBattleReactionInfluenceType.generated.h"

UENUM()
enum class EEndBattleReactionInfluenceType : uint8 {
    Instant,
    RadiusShort,
    RadiusMiddle,
    RadiusLong,
};

