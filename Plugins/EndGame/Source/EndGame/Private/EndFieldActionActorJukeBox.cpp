#include "EndFieldActionActorJukeBox.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorJukeBox::AEndFieldActionActorJukeBox() {
    this->InterestRadius = 1;
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->Party01BoxComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("Party01BoxComponent"));
    this->Party02BoxComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("Party02BoxComponent"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

