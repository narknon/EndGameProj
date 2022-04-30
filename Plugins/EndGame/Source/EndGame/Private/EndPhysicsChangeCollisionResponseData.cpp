#include "EndPhysicsChangeCollisionResponseData.h"

FEndPhysicsChangeCollisionResponseData::FEndPhysicsChangeCollisionResponseData() {
    this->CollisionChannel = ECC_WorldStatic;
    this->CollisionResponse = ECR_Ignore;
}

