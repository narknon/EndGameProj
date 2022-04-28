#pragma once
#include "CoreMinimal.h"
#include "EEndWalkRestriction.generated.h"

UENUM()
enum class EEndWalkRestriction {
    None,
    LimitedRunning,
    LimitedWalking,
};

