#include "EndAnimInstance.h"

UEndAnimInstance::UEndAnimInstance() {
    this->CenterBoneIndex = 1;
    this->LocomotionMatchingType = EEndAnimBehaviorMatchingType::DeltaLocalSpaceRotationAvg;
    this->LocomotionMatchingBoneNames.AddDefaulted(7);
    this->OverrideIdleActionIntervalMin = 5.00f;
    this->OverrideIdleActionIntervalMax = 10.00f;
    this->bPlayRunEndOnRunToWalk = false;
    this->OverrideRunEndInputBlockOnRunToWalk = -1.00f;
    this->bAdjustRotationInDamageActions = true;
    this->CinemaCorrectionHeightInterpSpeed = 3.00f;
    this->bAlwaysInterpCinemaCorrectionHeight = false;
    this->bIgnoreOnEndCutSceneCorrectionHeight = false;
    this->bUseSwitchBehaviorBlendLookAt = false;
    this->bEnableSwitchBehaviorWalkCancelBlend = false;
    this->bSkipBeginGuardDuringRunning = true;
    this->FaceGuardCustomBoneFilter = TEXT("UpperBody");
    this->bEnabledLaunchRagdoll = false;
    this->HipOffsetHeightWhenBattleUpperBodyAction = -8.00f;
    this->FaceGuardRunEndBlendOutTime = 0.80f;
    this->bSyncWeapon = false;
    this->bUseIdleMotionOnSyncWeaponMotionMissing = false;
    this->bHiddenWeaponInField = false;
    this->FieldActionRunInputCancelOverrideLocomotionRate = 0.00f;
}

