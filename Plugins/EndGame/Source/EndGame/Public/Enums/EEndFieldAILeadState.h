#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAILeadState.generated.h"

UENUM()
enum class EEndFieldAILeadState : uint8 {
    STATE_WAIT,
    STATE_MOVE,
    STATE_TURN,
    STATE_GOAL_ROT,
    STATE_GOAL,
    STATE_PUSHINGOUT,
    STATE_TURNBACK,
    STATE_MAX UMETA(Hidden),
};

