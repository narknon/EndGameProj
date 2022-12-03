#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAISingleAnimationState.generated.h"

UENUM(BlueprintType)
enum class EEndFieldAISingleAnimationState : uint8 {
    STATE_LOAD,
    STATE_PLAY,
    STATE_END,
    STATE_MAX UMETA(Hidden),
};

