#pragma once
#include "CoreMinimal.h"
#include "EAIPCBattleBehavior.generated.h"

UENUM()
enum class EAIPCBattleBehavior {
    ePlayerControl,
    eGuard,
    eBackToBattleArea,
    eCommandExecute,
    eForceMoveTo,
    eToSafeArea,
    eTakeCover,
    eConfrontIdle,
    eAvoidDanger,
    eAvoidDamage,
    eStandbyIdle,
    eBattleLoop,
    eEscaping,
    eMoveBattleArea,
    eNotInBattle,
    eConcentrateGuard,
    eExecuteAbility,
    eStandbyW2A,
    eMeleeAttack,
    eWait,
    eMax,
};

