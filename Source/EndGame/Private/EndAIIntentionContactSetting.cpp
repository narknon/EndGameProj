#include "EndAIIntentionContactSetting.h"

UEndAIIntentionContactSetting::UEndAIIntentionContactSetting() {
    this->LookAtWeightIdle = 0.80f;
    this->LookAtWeightWalk = 0.60f;
    this->LookAtWeightRun = 0.20f;
    this->AnimationContactOverrideLocomotionTime = 1.00f;
    this->AnimationContactWalkTime = 0.50f;
    this->AnimationContactWalkBlendTime = 0.20f;
    this->AnimationContactRunBlendTime = 0.00f;
    this->AnimationContactWalkUpperBodyBlendTime = 0.40f;
    this->AnimationContactRunUpperBodyBlendTime = 0.10f;
    this->AnimationContactWalkRotationRate = 90.00f;
    this->AnimationContactRunRotationRate = 90.00f;
    this->AnimationContactWalkNoInputSuspendTime = 0.50f;
    this->AnimationContactRunNoInputSuspendTime = 0.25f;
    this->HipMoveValue = 3.00f;
    this->HipDownValue = 2.00f;
    this->HipMoveTime = 0.05f;
    this->HipMoveBlendInTime = 0.20f;
    this->HipMoveBlendOutTime = 1.00f;
}

