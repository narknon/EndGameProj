#include "EndAnimNotifyStateOverrideCameraParams.h"

UEndAnimNotifyStateOverrideCameraParams::UEndAnimNotifyStateOverrideCameraParams() {
    this->bBeginBlend = false;
    this->BeginBlendOption = EAlphaBlendOption::Linear;
    this->BeginBlendTime = 0.10f;
    this->bEndBlend = false;
    this->EndBlendOption = EAlphaBlendOption::Linear;
    this->EndBlendTime = 0.20f;
}

