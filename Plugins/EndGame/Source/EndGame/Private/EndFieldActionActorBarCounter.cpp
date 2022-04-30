#include "EndFieldActionActorBarCounter.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorBarCounter::AEndFieldActionActorBarCounter() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->DividedVersatileVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedVersatileVolume"));
    this->DividedImpassableVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

