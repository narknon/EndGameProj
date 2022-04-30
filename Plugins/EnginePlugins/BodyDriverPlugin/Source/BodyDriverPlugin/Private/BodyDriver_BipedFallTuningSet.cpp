#include "BodyDriver_BipedFallTuningSet.h"

UBodyDriver_BipedFallTuningSet::UBodyDriver_BipedFallTuningSet() {
    this->OnlyUseSimpleRagdollMode = true;
    this->FallenRagdollFriction = 1;
    this->TrackDeathAnimationWhenSimpleRagdoll = true;
    this->MinActivationTime = 1;
    this->MaxActivationTime = 1;
    this->InitialTrackingStrength = 1;
    this->TrackingStrengthBlendoutTime = 1;
    this->InitialToMidDampingBlendTime = 1;
    this->MidToFinalDampingBlendTime = 1;
    this->InitialDamping = 1;
    this->MidDamping = 1;
    this->FinalDamping = 1;
    this->DisableAllHandlingBesidesStiffnessAndDamping = false;
    this->FallenMaxHipToFootDistMult = 1;
    this->FallenAnkleLimitRatio = 1;
    this->FallenNeckLimitRatio = 1;
    this->NeckDampingMult = 1;
    this->ExtendElbowsWhenFallen = true;
    this->ShoulderLimitOpenRatioWhenFallen = 1;
    this->PushHandsAwayFromChest = false;
    this->ExtendSpineNeckHips = true;
    this->AvoidFlayedArms = false;
    this->CorrectShoulder = false;
    this->RangeLimWindmill = 1;
    this->WeightWindmill = 1;
    this->WindmillRampUpTime = 1;
    this->StiffnessWindmill = 1;
    this->WindmillJointSpeed = 1;
    this->RotationSpeedWindmill = 1;
    this->DistWindmill = 1;
    this->RadWindmill = 1;
    this->ForwardOffsetWindmill = 1;
    this->UpOffsetWindmill = 1;
    this->WindmillMaxLengthRatio = 1;
    this->ExplosionLegsStartTime = 1;
    this->ExplosionLegsRampUpTime = 1;
    this->ExplosionLegsStiffness = 1;
    this->ExplosionLegsJointSpeed = 1;
    this->ExplosionLegsFrontDistance = 1;
    this->ExplosionLegsBackDistance = 1;
    this->ExplosionLegsSideDistance = 1;
    this->ExplosionLegsDownDistance = 1;
    this->ExplosionLegsKickSpeed = 1;
    this->ExplosionTrackingStiffness = 1;
    this->ExplosionSpineStiffness = 1;
    this->ExplosionStartRampTime = 1;
    this->ExplosionRampDuration = 1;
    this->ExplosionTotalAngleChange = 1;
}

