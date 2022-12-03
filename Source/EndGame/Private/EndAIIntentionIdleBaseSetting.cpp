#include "EndAIIntentionIdleBaseSetting.h"

UEndAIIntentionIdleBaseSetting::UEndAIIntentionIdleBaseSetting() {
    this->LookAtWeight = 0.80f;
    this->SaccadeWaitTimeAfterLookAt = 1.00f;
    this->SaccadeUpdateCycle = 0.10f;
    this->SaccadeUpRate = 0.80f;
}

