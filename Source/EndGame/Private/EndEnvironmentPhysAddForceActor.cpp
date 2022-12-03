#include "EndEnvironmentPhysAddForceActor.h"

AEndEnvironmentPhysAddForceActor::AEndEnvironmentPhysAddForceActor() {
    this->AddForceScale = EEndEnvironmentPhysForceScale::Scale0;
    this->AppliedRadius = 512.00f;
    this->bLimitAngle = false;
    this->AppliedAngle = 60.00f;
    this->bImmediate = true;
    this->AppliedSeconds = 2.00f;
    this->bIgnoreZ = false;
}

