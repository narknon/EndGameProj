#include "EndAIIntentionIdleBase.h"

FEndAIIntentionIdleBase::FEndAIIntentionIdleBase() {
    this->bPlayingLookAt = false;
    this->LookAtTimer = 0.00f;
    this->LookAtWaitTime = 0.00f;
    this->SaccadeTimer = 0.00f;
    this->SaccadeWaitTime = 0.00f;
    this->SaccadeWaitTimerByLookAt = 0.00f;
    this->SaccadeUpdateTimer = 0.00f;
}

