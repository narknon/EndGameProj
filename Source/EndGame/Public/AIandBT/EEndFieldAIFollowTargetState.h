#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIFollowTargetState.generated.h"

UENUM()
enum class EEndFieldAIFollowTargetState {
    STATE_WAIT,
    STATE_MOVE,
    STATE_MAX UMETA(Hidden),
};

