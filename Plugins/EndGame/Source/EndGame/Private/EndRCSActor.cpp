#include "EndRCSActor.h"

AEndRCSActor::AEndRCSActor() {
    this->StartBlendTime = 1;
    this->EndBlendTime = 1;
    this->ControllLimit = 1;
    this->UsrRollCorrection = true;
    this->RollCorrectionMax = 1;
    this->PitchCorrectionMax = 1;
    this->Intensity = 1;
    this->DependentTime = true;
    this->UseCenterLocation = false;
    this->BlendWeightBasedDist = 1;
}

