#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIAnimationState.generated.h"

UENUM(BlueprintType)
enum class EEndFieldAIAnimationState : uint8 {
    STATE_LOAD,
    STATE_PLAY,
    STATE_MAX UMETA(Hidden),
};

