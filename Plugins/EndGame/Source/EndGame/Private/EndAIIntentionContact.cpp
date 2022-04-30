#include "EndAIIntentionContact.h"

FEndAIIntentionContact::FEndAIIntentionContact() {
    this->Setting = NULL;
    this->bPlayingLookAt = false;
    this->LookAtTimer = 1;
    this->LookAtDuration = 1;
    this->LookAtCoolDownTime = 1;
    this->bPlayingAnimation = false;
    this->AnimationTimer = 1;
    this->AnimationCoolDownTime = 1;
    this->bPlayingHipMove = false;
    this->HipMoveTimer = 1;
    this->HipMoveCoolDownTime = 1;
}

