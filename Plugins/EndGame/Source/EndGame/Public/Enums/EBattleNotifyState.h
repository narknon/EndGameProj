#pragma once
#include "CoreMinimal.h"
#include "EBattleNotifyState.generated.h"

UENUM(BlueprintType)
namespace EBattleNotifyState {
    enum Type {
        InvincibleWithReaction,
        Invinceble,
        AipcNotAcceptAttack,
        Effect,
        InvincibleForce,
    };
}

