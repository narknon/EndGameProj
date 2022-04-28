#include "EndAnimNotifyPlaySound.h"

UEndAnimNotifyPlaySound::UEndAnimNotifyPlaySound() {
    this->VolumeMultiplier = 1;
    this->PitchMultiplier = 1;
    this->bFollow = true;
    this->Attenuation = NULL;
    this->bSyncOwnerHiddenState = true;
    this->bVibrationUCPCOnly = false;
}

