#include "EndAnimNotifyStateOverrideCameraParams.h"

UEndAnimNotifyStateOverrideCameraParams::UEndAnimNotifyStateOverrideCameraParams() {
    this->bBeginBlend = false;
    this->BeginBlendOption = EAlphaBlendOption::Linear;
    this->BeginBlendTime = 1;
    this->bEndBlend = false;
    this->EndBlendOption = EAlphaBlendOption::Linear;
    this->EndBlendTime = 1;
}

