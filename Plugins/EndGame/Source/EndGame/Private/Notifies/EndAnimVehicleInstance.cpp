#include "EndAnimVehicleInstance.h"

UEndAnimVehicleInstance::UEndAnimVehicleInstance() {
    this->CenterBoneAcceleration = 1;
    this->MaxCenterDistance = 1;
    this->CenterConstraintStiffness = 1;
    this->RollAngleMultiplier = 1;
    this->bUseHandle = true;
    this->MaxTurnAngleToHandleYawFactor = 1;
    this->MinHandleAnglePercentage = 1;
    this->LinearSuspensionInfos.AddDefaulted(1);
    this->AngularSuspensionInfos.AddDefaulted(1);
    this->IterationCount = 0;
    this->VelocityKmPerHour = 1;
    this->AccelerationKmPerHour = 1;
    this->AccelerationToTransRotationBias = 1;
    this->TransRotationReverseSpeed = 1;
    this->TransRotationToSinkingAccelerationBias = 1;
    this->TransSinkingAccelerationInterpSpeed = 1;
    this->RandomSinkingAccelerationMultiplier = 1;
    this->VelocityToRandomSinkingTimeBias = 1;
    this->TurnAngle = 1;
    this->GroundHeight = 1;
    this->GroundRoughness = 1;
    this->AdditiveRoll = 1;
    this->bUsePhysicsDuringAnimation = false;
    this->bUseWheelRotationDuringAnimation = false;
    this->JumpAngle = 1;
    this->JumpAngleResetInterpSpeed = 1;
    this->PitchRotationSpeed = 1;
}

