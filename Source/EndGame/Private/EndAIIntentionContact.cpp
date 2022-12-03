#include "EndAIIntentionContact.h"

FEndAIIntentionContact::FEndAIIntentionContact() {
    this->Setting = NULL;
    this->bPlayingLookAt = false;
    this->LookAtTimer = 0.00f;
    this->LookAtDuration = 0.00f;
    this->LookAtCoolDownTime = 0.00f;
    this->bPlayingAnimation = false;
    this->AnimationTimer = 0.00f;
    this->AnimationCoolDownTime = 0.00f;
    this->bPlayingHipMove = false;
    this->HipMoveTimer = 0.00f;
    this->HipMoveCoolDownTime = 0.00f;
}

