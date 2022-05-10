#include "EndAIIntentionWallContact.h"

FEndAIIntentionWallContact::FEndAIIntentionWallContact() {
    this->bPlayingAnimation = false;
    this->AnimationTimer = 1;
    this->AnimationCoolDownTime = 1;
    this->bPlayingHipMove = false;
    this->HipMoveTimer = 1;
    this->HipMoveCoolDownTime = 1;
}

