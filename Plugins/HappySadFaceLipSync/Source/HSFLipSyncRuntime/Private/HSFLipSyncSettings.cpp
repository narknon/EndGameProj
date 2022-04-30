#include "HSFLipSyncSettings.h"

UHSFLipSyncSettings::UHSFLipSyncSettings() {
    this->Fps = 1;
    this->KeyframeMethod = EHSFLipSyncKeyframeMethod::Classic;
    this->StartOffset = 0;
    this->EndOffset = 0;
    this->bUseAudioPower = false;
    this->bUseRandomization = true;
    this->ExpressionLevel = 1;
}

