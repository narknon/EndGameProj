#include "SQEXSEADSound.h"

USQEXSEADSound::USQEXSEADSound() {
    this->bForcedIgnore = false;
    this->bUseKohrogiAttenuation = false;
    this->ReferenceBank = NULL;
    this->SoundIndex = 0;
    this->bOverrideStopFadeTime = false;
    this->StopFadeTime = 0.50f;
    this->bIsUISound = false;
    this->PauseFadeTime = 0.00f;
    this->bIgnoreAudioVolumeAttenuation = false;
    this->bEnableSEADTracingOcclusion = false;
    this->SEADOcclusionTraceChannel = ECC_Visibility;
    this->SoundNameAliasSetting = NULL;
    this->bStreamingAsset_PlatformPS4 = false;
}

