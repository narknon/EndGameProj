#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSceneCountLifeCycleType.generated.h"

UENUM()
enum class EEndBattleSceneCountLifeCycleType : uint8 {
    eNone,
    eCountUp,
    eCountDown,
};

