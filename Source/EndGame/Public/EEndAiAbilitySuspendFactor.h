#pragma once
#include "CoreMinimal.h"
#include "EEndAiAbilitySuspendFactor.generated.h"

UENUM(BlueprintType)
enum class EEndAiAbilitySuspendFactor : uint8 {
    TimeOut,
    DamageReaction,
    ClearAction,
    SuspendAction,
    Burst,
    Weak,
    TargetLost,
    Sleep,
};

