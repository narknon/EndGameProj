#include "SQEXSEADZeroOneSeComponent.h"

void USQEXSEADZeroOneSeComponent::Stop() {
}

void USQEXSEADZeroOneSeComponent::SetZeroOneValue(int32 Slot, float Value, float FadeTime) {
}

void USQEXSEADZeroOneSeComponent::Play() {
}

USQEXSEADZeroOneSeComponent::USQEXSEADZeroOneSeComponent() {
    this->SoundAsset = NULL;
    this->SoundIndex = 0;
    this->FadeInTime = 1;
    this->FadeOutTime = 1;
    this->AudioStartTiming = ESQEXSEADAudioStartTimings::None;
    this->bEnable_Slot0 = false;
    this->PropertyType_Slot0 = ESQEXSEADZeroOneProperties::None;
    this->bEnable_Slot1 = false;
    this->PropertyType_Slot1 = ESQEXSEADZeroOneProperties::None;
    this->MyAudioComponent = NULL;
}

