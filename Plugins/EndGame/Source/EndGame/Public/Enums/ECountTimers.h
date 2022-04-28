#pragma once
#include "CoreMinimal.h"
#include "ECountTimers.generated.h"

UENUM()
enum class ECountTimers {
    CountUpLatestMove,
    CountUpLatestPosition,
    CountUpPhase,
    CountUpLocal,
    CountUpStep,
    CountUpMoveType,
    CountUpCantSee,
    CountUpBlockCantSee,
    CountUpGuard,
    CountDownIntervalMove,
    CountDownIntervalTurn,
    CountDownWaitMove,
    CountDownDelayAction,
    CountDownTopple,
    CountDownToppleEnd,
    CountDownTargetEvaluation,
    CountDownTargetUpdate,
    CountDownFear,
    CountDownExclusionFear,
    CountDownDelayMove,
    CountDownDelayAbility,
    CountDownNotAccept,
    CountDownDamageInterval,
    CountDownDamageMoveInterval,
    CountDownTimeout,
    CountDownLookChange,
    CountDownGuard,
    CountDownGuardInterval,
    CountDownRegisterMove,
    CountDownLookAt,
    CountDownFearInterval,
    CountDownDodgeInterval,
    CountDownSummonNormalActionInterval,
    CountDownPassiveMoveInterval,
    CountDownContinuousAttack,
    CountDownCaution,
    CountDownTargetUnreach,
    CountDownWandering,
    CountDownHovering,
    CountDownBattleStartBuffer,
    CountDownRequestAirMove,
    CountDownCommandValid,
    Size,
};

