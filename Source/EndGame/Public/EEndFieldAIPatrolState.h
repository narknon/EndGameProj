#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIPatrolState.generated.h"

UENUM(BlueprintType)
enum class EEndFieldAIPatrolState : uint8 {
    STATE_NONE,
    STATE_MOVE,
    STATE_GOALTURN,
    STATE_PUSHINGOUT,
    STATE_SINGLEANIM,
    STATE_LOOPANIM,
    STATE_LOADANIM,
    STATE_WAIT,
    STATE_AIRMOVE,
    STATE_SPOTTURN,
    STATE_WANDERING,
    STATE_TRIGGER_WAIT,
    STATE_MAX UMETA(Hidden),
};

