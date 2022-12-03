#pragma once
#include "CoreMinimal.h"
#include "EEndLocomotionState.generated.h"

UENUM(BlueprintType)
enum class EEndLocomotionState : uint8 {
    Idle,
    WalkStart,
    Walk,
    WalkEnd,
    RunStart,
    Run,
    RunEnd,
    DashStart,
    Dash,
    DashEnd,
    DashToWalk,
    IdleTurn,
    WalkTurn,
    RunTurn,
    StrafingWalkStart,
    StrafingWalk,
    StrafingWalkEnd,
    SwitchBehavior,
    Fall,
    FallEnd,
    BSWalkRunStart,
    BSWalkRun,
    BSStrafingWalk,
    Max,
};

