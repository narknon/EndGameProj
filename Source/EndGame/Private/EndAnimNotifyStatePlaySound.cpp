#include "EndAnimNotifyStatePlaySound.h"

UEndAnimNotifyStatePlaySound::UEndAnimNotifyStatePlaySound() {
    this->StartWaitTime = 1;
    this->VolumeMultiplier = 1;
    this->PitchMultiplier = 1;
    this->FadeOutDuration = 1;
    this->bFollow = true;
    this->Attenuation = NULL;
    this->bPauseOnAnimKeep = true;
    this->bVirtualizePlayWhenSilent = false;
    this->bSyncOwnerHiddenState = true;
    this->bVibrationUCPCOnly = false;
}

