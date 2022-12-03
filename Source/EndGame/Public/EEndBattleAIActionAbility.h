#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAIActionAbility.generated.h"

UENUM(BlueprintType)
enum class EEndBattleAIActionAbility : uint8 {
    eCharaSpec,
    eActionName,
    eInID,
    eInTime,
    eInTimeout,
    eInATB,
    eInRandomATB,
    eInMinRange,
    eInMaxRange,
    eInActionMin,
    eInActionMax,
    eInActionHeightMin,
    eInActionHeightMax,
    eInViewRange,
    eViewReverse,
    eInDelayMove,
    eInDelayAbility,
    eInNeedMove,
    eInNeedBetterMove,
    eInCancelLostTarget,
    eOverrideLeftAbility,
    eOverrideRightAbility,
};

