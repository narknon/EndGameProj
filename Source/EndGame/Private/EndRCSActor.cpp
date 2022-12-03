#include "EndRCSActor.h"

AEndRCSActor::AEndRCSActor() {
    this->StartBlendTime = 0.50f;
    this->EndBlendTime = 0.50f;
    this->ControllLimit = 0.00f;
    this->UsrRollCorrection = true;
    this->RollCorrectionMax = 15.00f;
    this->PitchCorrectionMax = 90.00f;
    this->Intensity = 0.10f;
    this->DependentTime = true;
    this->UseCenterLocation = false;
    this->BlendWeightBasedDist = 0.03f;
}

