#include "EndAimOnlyRail.h"

AEndAimOnlyRail::AEndAimOnlyRail() {
    this->StartBlendTime = 1;
    this->EndBlendTime = 1;
    this->ControllLimit = 1;
    this->UseCollisionCheck = true;
    this->StopControl = false;
    this->UseForceConnect = false;
}

