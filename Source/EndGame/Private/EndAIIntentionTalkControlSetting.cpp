#include "EndAIIntentionTalkControlSetting.h"

UEndAIIntentionTalkControlSetting::UEndAIIntentionTalkControlSetting() {
    this->CoolDownRate = 0.50f;
    this->LookAtWaitTimeBiasListener = 0.20f;
    this->LookAtWaitTimeBiasOther = 0.50f;
    this->LookAtUpperFollowTargetHeadRate = 1.00f;
    this->LookAtLowerFollowTargetHeadRate = 0.70f;
    this->LookAtToSaccadeTargetRate = 0.70f;
    this->LookAtTurnAngleThreshold = 75.00f;
    this->LookAtTurnBlendTime = 0.30f;
    this->LookAtTurnUpperBodyBlendTime = 1.00f;
    this->LookAtOffsetHeightInterpSpeed = 3.00f;
    this->LookAtOffsetHeightApplyDistance = 20.00f;
    this->LookAtDeactiveDistance = 1000.00f;
    this->SaccadeTargetOffsetHeight = -10.00f;
    this->StateContexts.AddDefaulted(1);
    this->PlayAnimationRate = 0.70f;
}

