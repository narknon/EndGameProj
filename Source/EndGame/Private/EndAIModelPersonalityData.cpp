#include "EndAIModelPersonalityData.h"

UEndAIModelPersonalityData::UEndAIModelPersonalityData() {
    this->InitialUpdatePriority = EEndAIUpdatePriority::VelyHigh_Talking;
    this->PersonalType = EEndAIPersonalType::PC;
    this->ExperienceSpeed = 1;
    this->CautionCalmSpeed = 1;
    this->RemoveRecognitionTime = 1;
}

