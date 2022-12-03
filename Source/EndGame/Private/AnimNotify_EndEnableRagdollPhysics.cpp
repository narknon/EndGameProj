#include "AnimNotify_EndEnableRagdollPhysics.h"

UAnimNotify_EndEnableRagdollPhysics::UAnimNotify_EndEnableRagdollPhysics() {
    this->bAddImpulse = false;
    this->Type = EEndPhysicsImpulseType::Default;
    this->bApplyImpulseToAllBones = false;
    this->Radius = 0.00f;
    this->Strength = 0.00f;
    this->bBikeUseRoadForward = false;
    this->bUseSimpleBehaviorBodyDriverForRiders = false;
    this->bBodyDriverRagdoll = false;
    this->MinActivationTime = 0.30f;
    this->MaxActivationTime = 0.70f;
}

