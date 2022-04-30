#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIFollowPositionState.generated.h"

UENUM()
enum class EEndFieldAIFollowPositionState : uint8 {
    STATE_MOVE,
    STATE_GOAL_ROT,
    STATE_GOAL,
    STATE_PUSHINGOUT,
    STATE_MAX UMETA(Hidden),
};

