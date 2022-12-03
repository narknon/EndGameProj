#pragma once
#include "CoreMinimal.h"
#include "EEndSpecificMoveTypeLayer.generated.h"

UENUM(BlueprintType)
enum class EEndSpecificMoveTypeLayer : uint8 {
    StateChange,
    ActionPlayerMoveType,
    ActionPlayerAfterGlowMoveType,
    ActionRestrictDashWhenActorsNear,
    ActionAutoWalkType,
    ActionTurnBack,
    RoomBox,
    Max,
};

