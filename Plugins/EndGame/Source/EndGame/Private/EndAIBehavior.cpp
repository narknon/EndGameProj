#include "EndAIBehavior.h"

FEndAIBehavior::FEndAIBehavior() {
    this->bUpdatableWhenAIStop = false;
    this->Priority = EEndAIIntentionPriority::RuleBased;
    this->CurrentState = EEndAIBehaviorState::Pending;
    this->Index = 0;
}

