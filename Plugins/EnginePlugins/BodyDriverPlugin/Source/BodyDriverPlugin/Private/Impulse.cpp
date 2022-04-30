#include "Impulse.h"

FImpulse::FImpulse() {
    this->Enabled = false;
    this->Impulse = 1;
    this->ImpulseArms = 1;
    this->ImpulseHands = 1;
    this->ImpulseLegs = 1;
    this->ImpulseMultWhenFallen = 1;
    this->ImpulseTime = 1;
    this->ImpulseRelativeToPartMass = false;
    this->AmountOfDecayPerStage = 1;
    this->MaxNumDecayStages = 0;
    this->ForceRandomizedValidHitPart = false;
    this->UseMaxInitialPartVelocityOverrides = false;
    this->MaxInitialPartLinearVelocity = 1;
    this->MaxInitialPartAngularVelocity = 1;
    this->ChanceOfPartOverride = 1;
    this->ClampAngleVertically = false;
    this->MinVerticalAngle = 1;
    this->MaxVerticalAngle = 1;
    this->ClampAngleToFacingCone = false;
    this->MaxConeAngleFromFacing = 1;
    this->ImpactMagnitude = 1;
    this->ImpactMultWhenFallen = 1;
    this->ImpactOutMagRatio = 1;
    this->ImpactMagnitudeLowerBody = 1;
    this->ImpactMagnitudeArms = 1;
    this->ImpactMagnitudeHands = 1;
    this->ImpactTime = 1;
    this->ImpactOutTime = 1;
    this->ImpactDecayRate = 1;
    this->ImpactMaxNumDecayStages = 0;
    this->ImpactRelativeToPartMass = false;
    this->StayUprightTorqueMagnitude = 1;
    this->StayUprightLiftMagnitude = 1;
    this->StayUprightMinTimeLift = 1;
    this->StayUprightMaxTimeLift = 1;
    this->StayUprightMinTimeTorque = 1;
    this->StayUprightMaxTimeTorque = 1;
    this->StayUprightMinMagAngle = 1;
    this->StayUprightMaxMagAngle = 1;
    this->StayUprightBailBodyAngle = 1;
    this->AllowPushDown = false;
    this->PainHunchAngle = 1;
    this->PainPeakStartTime = 1;
    this->PainPeakDuration = 1;
    this->PainPeakFalloffTime = 1;
    this->PainOnlyUseForIncludeParts = false;
}

