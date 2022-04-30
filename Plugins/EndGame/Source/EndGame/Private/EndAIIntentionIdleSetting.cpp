#include "EndAIIntentionIdleSetting.h"

UEndAIIntentionIdleSetting::UEndAIIntentionIdleSetting() {
    this->LookAtCancelTimeMin = 1;
    this->LookAtWaitTimeBiasInCaution = 1;
    this->LookAtBlendTimeBiasInCaution = 1;
    this->LookAtTargetRotationMinClampAngleInCaution = 1;
    this->LookAtTargetAdditiveRotationBiasInCaution = 1;
    this->SaccadeTargetRotationBiasInCaution = 1;
}

