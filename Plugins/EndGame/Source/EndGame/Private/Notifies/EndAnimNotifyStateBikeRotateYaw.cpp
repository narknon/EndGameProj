#include "EndAnimNotifyStateBikeRotateYaw.h"

UEndAnimNotifyStateBikeRotateYaw::UEndAnimNotifyStateBikeRotateYaw() {
    this->Type = EEndBikeRotateYawType::None;
    this->bUseAcceleration = false;
    this->RotateSpeed = 1;
    this->RotateMaxSpeed = 1;
    this->RotateAcceleration = 1;
    this->RotateArrivalTime = 1;
    this->FloatParam1 = 1;
}

