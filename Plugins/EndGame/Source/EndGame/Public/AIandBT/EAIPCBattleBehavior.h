#pragma once
#include "CoreMinimal.h"
#include "EAIPCBattleBehavior.generated.h"

UENUM(BlueprintType)
enum class EAIPCBattleBehavior : uint8 {
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

