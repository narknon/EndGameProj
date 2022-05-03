#pragma once
#include "CoreMinimal.h"
#include "EEndAIBehaviorState.generated.h"

UENUM(Blueprintable)
enum class EEndAIBehaviorState : uint8 {
    Pending,
    Playing,
    Suspended,
    Completed,
    Max,
};

