#include "EndAIIntentionIdle.h"

FEndAIIntentionIdle::FEndAIIntentionIdle() {
    this->Setting = NULL;
    this->bCautionLookAtPositiveAngle = false;
    this->AnimationTimer = 0.00f;
    this->AnimationWaitTime = 0.00f;
    this->bOverrideIdleAnimationWaitTimeRange = false;
}

