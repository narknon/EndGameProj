#include "EndEnvironmentPhysAddForceActor.h"

AEndEnvironmentPhysAddForceActor::AEndEnvironmentPhysAddForceActor() {
    this->AddForceScale = EEndEnvironmentPhysForceScale::Scale0;
    this->AppliedRadius = 1;
    this->bLimitAngle = false;
    this->AppliedAngle = 1;
    this->bImmediate = true;
    this->AppliedSeconds = 1;
    this->bIgnoreZ = false;
}

