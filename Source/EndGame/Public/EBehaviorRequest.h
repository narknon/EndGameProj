#pragma once
#include "CoreMinimal.h"
#include "EBehaviorRequest.generated.h"

UENUM()
namespace EBehaviorRequest {
    enum Type {
        eGuard,
        eBackToBattleArea,
        eCommandExecute,
        eExecuteAbility,
        eForceMoveTo,
        eToSafeArea,
        eTakeCover,
        eAvoidDanger,
        eAvoidDamage,
        eConfrontIdle,
        eStandbyIdle,
        eStandbyW2A,
        eMeleeAttack,
        eWait,
        eMax,
    };
}

