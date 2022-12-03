#include "AnimNotify_EndEnableRagdollPhysicsHitImpulse.h"

UAnimNotify_EndEnableRagdollPhysicsHitImpulse::UAnimNotify_EndEnableRagdollPhysicsHitImpulse() {
    this->Yaw = 0.00f;
    this->YawVariation = 5.00f;
    this->Pitch = 0.00f;
    this->PitchVariation = 0.00f;
    this->bBikeUseRoadForward = false;
    this->bUseSimpleBehaviorBodyDriverForRiders = false;
    this->ImpulseMultiplier = 1.00f;
    this->bApplyImpulseToAllBones = false;
    this->bIgnoreInertia = false;
}

