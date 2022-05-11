#pragma once
#include "CoreMinimal.h"
#include "EEndBattleReactionInfluenceType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleReactionInfluenceType : uint8 {
    Instant,
    RadiusShort,
    RadiusMiddle,
    RadiusLong,
};

