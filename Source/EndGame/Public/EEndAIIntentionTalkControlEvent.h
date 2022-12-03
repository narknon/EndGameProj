#pragma once
#include "CoreMinimal.h"
#include "EEndAIIntentionTalkControlEvent.generated.h"

UENUM(BlueprintType)
enum class EEndAIIntentionTalkControlEvent : uint8 {
    None,
    OnBeginTalker,
    OnBeginListener,
};

