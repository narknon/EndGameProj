#include "EndAIIntentionTalkControl.h"

FEndAIIntentionTalkControl::FEndAIIntentionTalkControl() {
    this->Setting = NULL;
    this->SentenceId = 0;
    this->CurrentPosingStateIndex = 0;
    this->CurrentPosingWaitTimer = 1;
    this->TalkInRequestId = 0;
    this->TalkOutRequestId = 0;
    this->TotalInterest = 1;
    this->SnapTotalInterest = 1;
    this->InterestLocationOffsetHeight = 1;
    this->ManualLookAtId = 0;
    this->LookAtTurnWaitTimer = 1;
    this->LookAtTurnWaitTimeMax = 1;
    this->LookAtTurnSentenceId = 0;
}

