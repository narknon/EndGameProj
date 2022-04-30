#pragma once
#include "CoreMinimal.h"
#include "ESummonBattleBehavior.generated.h"

UENUM()
enum class ESummonBattleBehavior : uint8 {
    eAppear,
    eReadyToFight,
    eBattleLoop,
    eCommandExecute,
    eHide,
    eResetLocation,
    eReturn,
    eDoNothing,
};

