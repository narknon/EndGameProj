#include "EndLocomotionSetting.h"

FEndLocomotionSetting::FEndLocomotionSetting() {
    this->BlendTime = 0.00f;
    this->bOverrideUpperBodyBlend = false;
    this->UpperBodyBlendTime = 0.00f;
    this->RotationRate = 0.00f;
    this->bUseSmoothRotationRate = false;
    this->SmoothRotationRateMax = 0.00f;
    this->SmoothRotationRateInputAngleMax = 0.00f;
    this->InputBlockTime = 0.00f;
}

