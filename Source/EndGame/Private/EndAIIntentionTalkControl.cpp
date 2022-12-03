#include "EndAIIntentionTalkControl.h"

FEndAIIntentionTalkControl::FEndAIIntentionTalkControl() {
    this->Setting = NULL;
    this->SentenceId = 0;
    this->CurrentPosingStateIndex = 0;
    this->CurrentPosingWaitTimer = 0.00f;
    this->TalkInRequestId = 0;
    this->TalkOutRequestId = 0;
    this->TotalInterest = 0.00f;
    this->SnapTotalInterest = 0.00f;
    this->InterestLocationOffsetHeight = 0.00f;
    this->ManualLookAtId = 0;
    this->LookAtTurnWaitTimer = 0.00f;
    this->LookAtTurnWaitTimeMax = 0.00f;
    this->LookAtTurnSentenceId = 0;
}

