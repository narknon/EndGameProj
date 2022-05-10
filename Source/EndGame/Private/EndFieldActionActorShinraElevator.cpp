#include "EndFieldActionActorShinraElevator.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorShinraElevator::AEndFieldActionActorShinraElevator() {
    this->FloorIndex = 0;
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->TargetIconOutSideVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconOutSideVolume"));
    this->TargetIconInSideVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconInSideVolume"));
    this->Party01BoxComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("Party01BoxComponent"));
    this->Party02BoxComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("Party02BoxComponent"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

