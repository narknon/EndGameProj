#include "EndAIIntentionIdleBase.h"

FEndAIIntentionIdleBase::FEndAIIntentionIdleBase() {
    this->bPlayingLookAt = false;
    this->LookAtTimer = 1;
    this->LookAtWaitTime = 1;
    this->SaccadeTimer = 1;
    this->SaccadeWaitTime = 1;
    this->SaccadeWaitTimerByLookAt = 1;
    this->SaccadeUpdateTimer = 1;
}

