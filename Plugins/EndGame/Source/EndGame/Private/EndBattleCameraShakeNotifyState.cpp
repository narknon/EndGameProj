#include "EndBattleCameraShakeNotifyState.h"

UEndBattleCameraShakeNotifyState::UEndBattleCameraShakeNotifyState() {
    this->Cycle = 1;
    this->Power = 1;
    this->Decay = 1;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
    this->Inner = 1;
    this->Outer = 1;
    this->EnableLoop = false;
}

