#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIAnimationState.generated.h"

UENUM()
enum class EEndFieldAIAnimationState {
    STATE_LOAD,
    STATE_PLAY,
    STATE_MAX UMETA(Hidden),
};

