#include "EndCharacterZeroOneSeComponent.h"

UEndCharacterZeroOneSeComponent::UEndCharacterZeroOneSeComponent() {
    this->PropertyValueMax = 1;
    this->FadeInTime = 1;
    this->FadeOutTime = 1;
    this->bAttatch = true;
    this->bDefaultEnable = false;
    this->bEnableSlot0 = true;
    this->Slot0Property = EEndCharacterZeroOneSeProperties::None;
    this->bEnableSlot1 = true;
    this->Slot1Property = EEndCharacterZeroOneSeProperties::None;
}

