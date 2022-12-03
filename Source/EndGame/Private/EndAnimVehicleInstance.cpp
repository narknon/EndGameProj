#include "EndAnimVehicleInstance.h"

UEndAnimVehicleInstance::UEndAnimVehicleInstance() {
    this->CenterBoneAcceleration = 0.00f;
    this->MaxCenterDistance = 50.00f;
    this->CenterConstraintStiffness = 0.50f;
    this->RollAngleMultiplier = 1.00f;
    this->bUseHandle = true;
    this->MaxTurnAngleToHandleYawFactor = 0.10f;
    this->MinHandleAnglePercentage = 0.30f;
    this->LinearSuspensionInfos.AddDefaulted(1);
    this->AngularSuspensionInfos.AddDefaulted(1);
    this->IterationCount = 2;
    this->VelocityKmPerHour = 0.00f;
    this->AccelerationKmPerHour = 0.00f;
    this->AccelerationToTransRotationBias = -1.00f;
    this->TransRotationReverseSpeed = 7.00f;
    this->TransRotationToSinkingAccelerationBias = 300.00f;
    this->TransSinkingAccelerationInterpSpeed = 3.00f;
    this->RandomSinkingAccelerationMultiplier = 1.00f;
    this->VelocityToRandomSinkingTimeBias = 0.01f;
    this->TurnAngle = 0.00f;
    this->GroundHeight = 0.00f;
    this->GroundRoughness = 0.00f;
    this->AdditiveRoll = 0.00f;
    this->bUsePhysicsDuringAnimation = false;
    this->bUseWheelRotationDuringAnimation = false;
    this->JumpAngle = -45.00f;
    this->JumpAngleResetInterpSpeed = 20.00f;
    this->PitchRotationSpeed = 20.50f;
}

