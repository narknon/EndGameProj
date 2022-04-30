#include "SQEXSEAD_BGMOptions.h"

FSQEXSEAD_BGMOptions::FSQEXSEAD_BGMOptions() {
    this->Priority = 0;
    this->StoreBehaviour = ESQEXSEAD_BGMStoreBehaviour::Stop;
    this->StopBehaviour = ESQEXSEAD_BGMStopBehaviour::Stop;
    this->PlayFadeInTime = 1;
    this->ResumeFadeInTime = 1;
    this->SuspendFadeOutTime = 1;
    this->StopFadeOutTime = 1;
    this->bRestartSameBGM = false;
}

