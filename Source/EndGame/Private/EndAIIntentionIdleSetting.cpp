#include "EndAIIntentionIdleSetting.h"

UEndAIIntentionIdleSetting::UEndAIIntentionIdleSetting() {
    this->LookAtCancelTimeMin = 0.30f;
    this->LookAtWaitTimeBiasInCaution = 0.40f;
    this->LookAtBlendTimeBiasInCaution = 0.50f;
    this->LookAtTargetRotationMinClampAngleInCaution = 40.00f;
    this->LookAtTargetAdditiveRotationBiasInCaution = 3.00f;
    this->SaccadeTargetRotationBiasInCaution = 2.00f;
}

