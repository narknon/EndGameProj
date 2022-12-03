#include "EndPhysicalConstraintEvaluator.h"

FEndPhysicalConstraintEvaluator::FEndPhysicalConstraintEvaluator() {
    this->ConstraintSetting = NULL;
    this->DefaultConstraintSetting = NULL;
    this->bEnabledSimulation = false;
    this->bActive = false;
    this->BlendRate = 0.00f;
    this->BlendSpeed = 0.00f;
    this->bDebugDraw = false;
    this->OwnerCharacter = NULL;
    this->OwnerMeshActor = NULL;
    this->OwnerMesh = NULL;
    this->OwnerWorld = NULL;
}

