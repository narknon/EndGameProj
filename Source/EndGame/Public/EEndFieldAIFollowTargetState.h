#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIFollowTargetState.generated.h"

UENUM(BlueprintType)
enum class EEndFieldAIFollowTargetState : uint8 {
    STATE_WAIT,
    STATE_MOVE,
    STATE_MAX UMETA(Hidden),
};

