#include "EndAnimNotifyModifyMovementMode.h"

UEndAnimNotifyModifyMovementMode::UEndAnimNotifyModifyMovementMode() {
    this->bMovable = true;
    this->bHitWall = true;
    this->bHitObject = true;
    this->bFitFloor = true;
    this->bMaxWeight = false;
    this->bForceUpdateLanding = false;
}

