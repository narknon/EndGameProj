#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAISingleAnimationState.generated.h"

UENUM()
enum class EEndFieldAISingleAnimationState {
    STATE_LOAD,
    STATE_PLAY,
    STATE_END,
    STATE_MAX UMETA(Hidden),
};

