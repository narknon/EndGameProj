#include "EndPhysicalConstraintEvaluator.h"

FEndPhysicalConstraintEvaluator::FEndPhysicalConstraintEvaluator() {
    this->ConstraintSetting = NULL;
    this->DefaultConstraintSetting = NULL;
    this->bEnabledSimulation = false;
    this->bActive = false;
    this->BlendRate = 1;
    this->BlendSpeed = 1;
    this->bDebugDraw = false;
    this->OwnerCharacter = NULL;
    this->OwnerMeshActor = NULL;
    this->OwnerMesh = NULL;
    this->OwnerWorld = NULL;
}

