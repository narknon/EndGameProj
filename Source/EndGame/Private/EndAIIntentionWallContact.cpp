#include "EndAIIntentionWallContact.h"

FEndAIIntentionWallContact::FEndAIIntentionWallContact() {
    this->bPlayingAnimation = false;
    this->AnimationTimer = 0.00f;
    this->AnimationCoolDownTime = 0.00f;
    this->bPlayingHipMove = false;
    this->HipMoveTimer = 0.00f;
    this->HipMoveCoolDownTime = 0.00f;
}

