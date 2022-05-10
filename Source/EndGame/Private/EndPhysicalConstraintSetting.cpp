#include "EndPhysicalConstraintSetting.h"

UEndPhysicalConstraintSetting::UEndPhysicalConstraintSetting() {
    this->PositionIterationCount = 0;
    this->VelocityIterationCount = 0;
    this->bSimulateComponentSpace = false;
    this->bTwoStageOrientRotation = false;
    this->bIgnoreActorVelocity = false;
    this->bUseConstantDeltaTime = true;
    this->SimulationDeltaTimePowBias = 1;
    this->ContactTargetRadius = 1;
    this->bUpdateKinematicBonesToAnim = true;
    this->bApplyBoneBlendRate = false;
}

