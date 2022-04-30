#include "Explosion.h"

FExplosion::FExplosion() {
    this->Enabled = false;
    this->UseBaseRagdollRegardless = false;
    this->UseImpulseDataAsWell = false;
    this->SkipLinearVelocityControl = false;
    this->SkipBaseDataVelocityClamp = false;
    this->MinLinearMagnitude = 1;
    this->MaxLinearMagnitude = 1;
    this->LinearForceApplyTime = 1;
    this->ClosestDistanceToScaleMagnitude = 1;
    this->FarthestDistanceToScaleMagnitude = 1;
    this->MinAngleFromHorizon = 1;
    this->MaxAngleFromHorizon = 1;
    this->LinearMagnitudeForContactExplosions = 1;
    this->AngleFromHorizonOverrideForContactExplosions = 1;
    this->RotationOppositeOfExplosionDirection = false;
    this->RotationUseDesiredBodyVelocity = false;
    this->RotationConstrainOtherRotVelocity = false;
    this->RotationSpeedForContactExplosion = 1;
    this->RotationStartTime = 1;
    this->RotationDuration = 1;
    this->PolarSpinProportion = 1;
    this->PolarSpinTopPart = kPartPelvis;
}

