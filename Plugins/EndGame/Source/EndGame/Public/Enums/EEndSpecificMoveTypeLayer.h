#pragma once
#include "CoreMinimal.h"
#include "EEndSpecificMoveTypeLayer.generated.h"

UENUM()
enum class EEndSpecificMoveTypeLayer {
    StateChange,
    ActionPlayerMoveType,
    ActionPlayerAfterGlowMoveType,
    ActionRestrictDashWhenActorsNear,
    ActionAutoWalkType,
    ActionTurnBack,
    RoomBox,
    Max,
};

