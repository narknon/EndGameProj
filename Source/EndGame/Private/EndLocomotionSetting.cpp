#include "EndLocomotionSetting.h"

FEndLocomotionSetting::FEndLocomotionSetting() {
    this->BlendTime = 1;
    this->bOverrideUpperBodyBlend = false;
    this->UpperBodyBlendTime = 1;
    this->RotationRate = 1;
    this->bUseSmoothRotationRate = false;
    this->SmoothRotationRateMax = 1;
    this->SmoothRotationRateInputAngleMax = 1;
    this->InputBlockTime = 1;
}

