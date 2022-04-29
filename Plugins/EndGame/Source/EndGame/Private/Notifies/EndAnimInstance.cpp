#include "EndAnimInstance.h"

UEndAnimInstance::UEndAnimInstance() {
    this->CenterBoneIndex = 0;
    this->LocomotionMatchingType = EEndAnimBehaviorMatchingType::DeltaLocalSpaceRotationMax;
    this->LocomotionMatchingBoneNames.AddDefaulted(7);
    this->OverrideIdleActionIntervalMin = 1;
    this->OverrideIdleActionIntervalMax = 1;
    this->bPlayRunEndOnRunToWalk = false;
    this->OverrideRunEndInputBlockOnRunToWalk = 1;
    this->bAdjustRotationInDamageActions = true;
    this->CinemaCorrectionHeightInterpSpeed = 1;
    this->bAlwaysInterpCinemaCorrectionHeight = false;
    this->bIgnoreOnEndCutSceneCorrectionHeight = false;
    this->bUseSwitchBehaviorBlendLookAt = false;
    this->bEnableSwitchBehaviorWalkCancelBlend = false;
    this->bSkipBeginGuardDuringRunning = true;
    this->FaceGuardCustomBoneFilter = TEXT("UpperBody");
    this->bEnabledLaunchRagdoll = false;
    this->HipOffsetHeightWhenBattleUpperBodyAction = 1;
    this->FaceGuardRunEndBlendOutTime = 1;
    this->bSyncWeapon = false;
    this->bUseIdleMotionOnSyncWeaponMotionMissing = false;
    this->bHiddenWeaponInField = false;
    this->FieldActionRunInputCancelOverrideLocomotionRate = 1;
}

