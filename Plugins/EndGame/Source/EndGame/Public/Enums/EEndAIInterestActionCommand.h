#pragma once
#include "CoreMinimal.h"
#include "EEndAIInterestActionCommand.generated.h"

UENUM()
enum class EEndAIInterestActionCommand {
    Approach,
    PlayAnimation,
    OverrideAnim,
    Escape,
    Wait,
    LookAt,
    OverrideAnimEnd,
    LookAtEnd,
    UpperBodyBlendAnimation,
    UpperBodyBlendAnimationEnd,
    Emotion,
    EmotionEnd,
    OverrideIdleVariation,
    Turn,
    TurnEnd,
    None,
    Max,
};

