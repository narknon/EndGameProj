#include "EndEnvironmentPhysActorSpawner.h"

AEndEnvironmentPhysActorSpawner::AEndEnvironmentPhysActorSpawner() {
    this->bRunBegin = false;
    this->bSpawnWithImpulse = false;
    this->bEnableImpulse = false;
    this->ImpulseScale = EEndEnvironmentPhysForceScale::Scale0;
    this->ImpulseRadius = 1;
}

