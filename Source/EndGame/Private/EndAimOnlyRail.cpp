#include "EndAimOnlyRail.h"

AEndAimOnlyRail::AEndAimOnlyRail() {
    this->StartBlendTime = 0.50f;
    this->EndBlendTime = 0.50f;
    this->ControllLimit = 0.00f;
    this->UseCollisionCheck = true;
    this->StopControl = false;
    this->UseForceConnect = false;
}

