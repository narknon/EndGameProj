#pragma once
#include "CoreMinimal.h"
#include "EEndNavAreaType.generated.h"

UENUM(BlueprintType)
enum class EEndNavAreaType : uint8 {
    NullArea,
    Ladder,
    Cover,
    BattleArea,
    CationArea,
    Impassable,
    Obstacle,
    Ignore,
    Versatile,
    InDoor,
    RedLaser,
    Door,
    CrouchedMove,
    CrackMove,
    PathWay,
    CentralPathWay,
    ExtendedBattleArea,
    FieldAction,
    CinemaObstacle,
    HookShot,
    AddAttribute,
    Versatile2,
    Versatile3,
    Versatile4,
    Impassable2,
    AddAttribute2,
    AddAttribute3,
    AddAttribute4,
    Flatlands,
    WaterSurface,
    Mountain,
    Max,
    None,
};

