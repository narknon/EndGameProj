#pragma once
#include "CoreMinimal.h"
#include "EEndQueryFilterType.generated.h"

UENUM(BlueprintType)
enum class EEndQueryFilterType : uint8 {
    Default,
    Battle,
    BattleCaution,
    SimpleBattle,
    NoBattle,
    Cover,
    NoCost,
    CentralWayStreet,
    RightWayStreet,
    LeftWayStreet,
    CinemaFilter,
    NoFieldAction,
    NoCinemaObstacle,
    Custom,
    FlatlandsOnly,
    WaterSurfaceOnly,
    MountainOnly,
    FlatlandsWaterSurface,
    FlatlandsMountain,
    Max,
};

