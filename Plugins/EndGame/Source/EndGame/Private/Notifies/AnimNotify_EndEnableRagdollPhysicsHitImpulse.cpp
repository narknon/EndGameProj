#include "AnimNotify_EndEnableRagdollPhysicsHitImpulse.h"

UAnimNotify_EndEnableRagdollPhysicsHitImpulse::UAnimNotify_EndEnableRagdollPhysicsHitImpulse() {
    this->Yaw = 1;
    this->YawVariation = 1;
    this->Pitch = 1;
    this->PitchVariation = 1;
    this->bBikeUseRoadForward = false;
    this->bUseSimpleBehaviorBodyDriverForRiders = false;
    this->ImpulseMultiplier = 1;
    this->bApplyImpulseToAllBones = false;
    this->bIgnoreInertia = false;
}

