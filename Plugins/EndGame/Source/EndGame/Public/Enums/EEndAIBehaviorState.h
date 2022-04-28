#pragma once
#include "CoreMinimal.h"
#include "EEndAIBehaviorState.generated.h"

UENUM()
enum class EEndAIBehaviorState {
    Pending,
    Playing,
    Suspended,
    Completed,
    Max,
};

