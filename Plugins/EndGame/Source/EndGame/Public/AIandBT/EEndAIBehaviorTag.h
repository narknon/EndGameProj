#pragma once
#include "CoreMinimal.h"
#include "EEndAIBehaviorTag.generated.h"

UENUM()
enum class EEndAIBehaviorTag : uint8 {
    Move,
    LookAt,
    Saccade,
    BodyEmotion,
    BodyControl,
    Voice,
    Max,
};

