#pragma once
#include "CoreMinimal.h"
#include "EEndAIIntentionPriority.generated.h"

UENUM()
enum class EEndAIIntentionPriority {
    RuleBased,
    High,
    Middle,
    Low,
    Max,
};

