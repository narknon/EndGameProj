#include "EndDataTableBattleSyncAction.h"

FEndDataTableBattleSyncAction::FEndDataTableBattleSyncAction() {
    this->EnableAirTarget = 0;
    this->DisableTargetTalk = 0;
    this->CameraSequenceNotify = 0;
    this->StopCameraDetach = 0;
    this->AttachType = 0;
    this->AttachInterpTime = 0.00f;
    this->AttachRotInterpTime = 0.00f;
    this->AttachLocationType = 0;
    this->AttachRotationType = 0;
    this->AttachRootOffsetType = 0;
    this->NoAttach = 0;
    this->AlongSlope = 0;
    this->OwnerPartDamageToTargetRate = 0.00f;
    this->TargetMotionType = 0;
    this->TargetDisableFromEnemy = 0;
    this->TargetDoesntGetTrophy = 0;
    this->TargetEnableCommand = 0;
    this->OwnerBeginAnimBlend = 0;
    this->TargetBeginAnimBlend = 0;
    this->TargetBeginDetachDamageSourceIDEffect = 0;
    this->OwnerLoopAnimBlend = 0;
    this->OwnerHPType = 0;
    this->OwnerHP = 0;
    this->OwnerEnableWalk = 0;
    this->TargetLoopAnimBlend = 0;
    this->TargetAbilityHitCount = 0;
    this->TargetMagicHitCount = 0;
    this->TargetLimitHitCount = 0;
    this->TargetLoopDetachDamageSourceIDEffect = 0;
    this->LoopTime = 0.00f;
    this->OwnerFailureAnimBlend = 0;
    this->TargetFailureAnimBlend = 0;
    this->OwnerSuccessAnimBlend = 0;
    this->TargetSuccessAnimBlend = 0;
    this->DisableOwnerDead = 0;
    this->TargetReleaseAnimBlend = 0;
    this->OwnerReleaseAnimBlend = 0;
    this->DisableTargetDead = 0;
    this->TargetDetachPosture = 0;
}

