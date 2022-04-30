#pragma once
#include "CoreMinimal.h"
#include "EEndAIIntentionTalkControlEvent.generated.h"

UENUM()
enum class EEndAIIntentionTalkControlEvent {
    None,
    OnBeginTalker,
    OnBeginListener,
};

