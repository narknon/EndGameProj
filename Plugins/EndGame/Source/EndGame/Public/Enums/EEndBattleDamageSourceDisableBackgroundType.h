#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourceDisableBackgroundType.generated.h"

UENUM()
enum class EEndBattleDamageSourceDisableBackgroundType {
    All,
    NoHit,
    WallOnly,
    TerrainOnly,
    AllWithCharaWall,
};

