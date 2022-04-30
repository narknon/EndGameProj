#include "EndFieldActionActorPeek.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorPeek::AEndFieldActionActorPeek() {
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->TargetIconComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconComponent"));
    this->CameraComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("CameraComponent"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

