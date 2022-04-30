#include "AnimNotify_EndEnableRagdollPhysics.h"

UAnimNotify_EndEnableRagdollPhysics::UAnimNotify_EndEnableRagdollPhysics() {
    this->bAddImpulse = false;
    this->Type = EEndPhysicsImpulseType::Default;
    this->bApplyImpulseToAllBones = false;
    this->Radius = 1;
    this->Strength = 1;
    this->bBikeUseRoadForward = false;
    this->bUseSimpleBehaviorBodyDriverForRiders = false;
    this->bBodyDriverRagdoll = false;
    this->MinActivationTime = 1;
    this->MaxActivationTime = 1;
}

