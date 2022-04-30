#include "EndAIIntentionTalkControlSetting.h"

UEndAIIntentionTalkControlSetting::UEndAIIntentionTalkControlSetting() {
    this->CoolDownRate = 1;
    this->LookAtWaitTimeBiasListener = 1;
    this->LookAtWaitTimeBiasOther = 1;
    this->LookAtUpperFollowTargetHeadRate = 1;
    this->LookAtLowerFollowTargetHeadRate = 1;
    this->LookAtToSaccadeTargetRate = 1;
    this->LookAtTurnAngleThreshold = 1;
    this->LookAtTurnBlendTime = 1;
    this->LookAtTurnUpperBodyBlendTime = 1;
    this->LookAtOffsetHeightInterpSpeed = 1;
    this->LookAtOffsetHeightApplyDistance = 1;
    this->LookAtDeactiveDistance = 1;
    this->SaccadeTargetOffsetHeight = 1;
    this->StateContexts.AddDefaulted(1);
    this->PlayAnimationRate = 1;
}

