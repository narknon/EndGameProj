#pragma once
#include "CoreMinimal.h"
#include "EAIPCBattleState.generated.h"

UENUM()
enum class EAIPCBattleState {
    eTargetSearch,
    eAttack,
    eCaution,
    eMax,
};

