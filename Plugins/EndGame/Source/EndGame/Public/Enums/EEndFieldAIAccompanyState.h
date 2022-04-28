#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIAccompanyState.generated.h"

UENUM()
enum class EEndFieldAIAccompanyState {
    STATE_WAIT,
    STATE_MOVE,
    STATE_MAX UMETA(Hidden),
};

