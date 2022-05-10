#include "EndFootAttributeComponent.h"
#include "SQEXSEADAutoSeComponent.h"

UEndFootAttributeComponent::UEndFootAttributeComponent() {
    this->SoundBank = NULL;
    this->SettingData = NULL;
    this->DetectionSetting = NULL;
    this->SoundIndexTable = NULL;
    this->AutoSeComponent = CreateDefaultSubobject<USQEXSEADAutoSeComponent>(TEXT("SQEXSEADAutoSeComponent"));
    this->AutoSeCallback = NULL;
    this->bEnabledFootAttribute = true;
}

