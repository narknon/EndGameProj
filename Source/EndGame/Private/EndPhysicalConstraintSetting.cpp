#include "EndPhysicalConstraintSetting.h"

UEndPhysicalConstraintSetting::UEndPhysicalConstraintSetting() {
    this->PositionIterationCount = 4;
    this->VelocityIterationCount = 0;
    this->bSimulateComponentSpace = false;
    this->bTwoStageOrientRotation = false;
    this->bIgnoreActorVelocity = false;
    this->bUseConstantDeltaTime = true;
    this->SimulationDeltaTimePowBias = 1.10f;
    this->ContactTargetRadius = 300.00f;
    this->bUpdateKinematicBonesToAnim = true;
    this->bApplyBoneBlendRate = false;
}

