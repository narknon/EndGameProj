#pragma once
#include "CoreMinimal.h"
#include "EEndBehaviorLaunchFsmState.generated.h"

UENUM(BlueprintType)
enum class EEndBehaviorLaunchFsmState : uint8 {
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

