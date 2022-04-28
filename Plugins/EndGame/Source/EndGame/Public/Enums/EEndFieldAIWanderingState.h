#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIWanderingState.generated.h"

UENUM()
enum class EEndFieldAIWanderingState {
    STATE_LOTTERY,
    STATE_WAIT,
    STATE_CALC_POS,
    STATE_MOVE,
    STATE_RETURN,
    STATE_MAX UMETA(Hidden),
};

