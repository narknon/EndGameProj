#include "EndAIIntentionContactSetting.h"

UEndAIIntentionContactSetting::UEndAIIntentionContactSetting() {
    this->LookAtWeightIdle = 1;
    this->LookAtWeightWalk = 1;
    this->LookAtWeightRun = 1;
    this->AnimationContactOverrideLocomotionTime = 1;
    this->AnimationContactWalkTime = 1;
    this->AnimationContactWalkBlendTime = 1;
    this->AnimationContactRunBlendTime = 1;
    this->AnimationContactWalkUpperBodyBlendTime = 1;
    this->AnimationContactRunUpperBodyBlendTime = 1;
    this->AnimationContactWalkRotationRate = 1;
    this->AnimationContactRunRotationRate = 1;
    this->AnimationContactWalkNoInputSuspendTime = 1;
    this->AnimationContactRunNoInputSuspendTime = 1;
    this->HipMoveValue = 1;
    this->HipDownValue = 1;
    this->HipMoveTime = 1;
    this->HipMoveBlendInTime = 1;
    this->HipMoveBlendOutTime = 1;
}

