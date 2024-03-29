#pragma once
#include "CoreMinimal.h"
#include "EControllerMask.generated.h"

UENUM(BlueprintType)
enum class EControllerMask : uint8 {
    SYSTEM,
    BATTLE_SUSPEND,
    BATTLE_STATUS,
    SUMMON_CUTSCENE_SKILL,
    SET_PLAY,
    AUTO_PLAY,
    BATTLE_SCENE_BP,
    MAX,
};

