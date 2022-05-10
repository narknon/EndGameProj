#pragma once
#include "CoreMinimal.h"
#include "EEndBehaviorLaunchFsmState.generated.h"

UENUM()
enum class EEndBehaviorLaunchFsmState {
    Pending,
    Launch,
    InAir,
    AirRecoveryStart,
    AirRecoveryLoop,
    AirRecoveryEnd,
    LandingRecovery,
    CrashLand,
    CrashLandLoop,
    WakeUp,
};

