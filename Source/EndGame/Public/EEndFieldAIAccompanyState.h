#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIAccompanyState.generated.h"

UENUM(BlueprintType)
enum class EEndFieldAIAccompanyState : uint8 {
    STATE_WAIT,
    STATE_MOVE,
    STATE_MAX UMETA(Hidden),
};

