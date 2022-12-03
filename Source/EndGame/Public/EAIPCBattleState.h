#pragma once
#include "CoreMinimal.h"
#include "EAIPCBattleState.generated.h"

UENUM(BlueprintType)
enum class EAIPCBattleState : uint8 {
    eTargetSearch,
    eAttack,
    eCaution,
    eMax,
};

