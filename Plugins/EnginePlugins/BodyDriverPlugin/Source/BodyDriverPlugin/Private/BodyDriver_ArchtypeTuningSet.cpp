#include "BodyDriver_ArchtypeTuningSet.h"

UBodyDriver_ArchtypeTuningSet::UBodyDriver_ArchtypeTuningSet() {
    this->UseArchType = false;
    this->ArchetypeIsSelf = false;
    this->UseBaseForExplosions = true;
    this->UseBoundsInsteadOfPushes = false;
    this->ForceFrontWoundGrabs = false;
    this->DisableReachForWound = false;
    this->DisableBrace = false;
    this->DisableWindmill = false;
    this->MoveClavicleHitsToUpperArm = false;
    this->MoveLowerLegHitsToThighs = false;
    this->MoveNeckHitsToHead = false;
    this->OverrideFallenLimitBlendRate = 1;
    this->FallenBaseInitialBoundScale = 1;
    this->ArchetypeJointSpeedClamp = 1;
    this->HandAndForearmsCountsAsNonFootOnGround = true;
    this->AppendagesCountsAsNonFootOnGround = false;
    this->ExplosionForceScale = 1;
    this->PatchInitialDistance = 1;
    this->PatchInitialDistanceMultiplierForNonExplosions = 1;
    this->PatchMoveRate = 1;
    this->PatchMoveRateMultiplierForNonExplosions = 1;
    this->PatchSize = 1;
    this->PatchSizeMultiplierForNonExplosions = 1;
    this->PatchMinDist = 1;
    this->ArchetypeInitialBoundScale = 1;
    this->UseArchTypeForDebugImpulsesTuning = true;
    this->UseArchTypeForApplyImpulseTuning = true;
    this->UseArchTypeForApplyExplosionTuning = false;
}

