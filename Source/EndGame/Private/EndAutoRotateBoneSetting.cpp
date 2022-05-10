#include "EndAutoRotateBoneSetting.h"

FEndAutoRotateBoneSetting::FEndAutoRotateBoneSetting() {
    this->bUseLocalAxisAsRightVector = false;
    this->RightVectorAxis = EAxis::None;
    this->bPerformComponentSpaceVelocityCalculation = false;
}

