#include "EndFieldActionActorCocoon.h"
#include "Components/BoxComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorCocoon::AEndFieldActionActorCocoon() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->DividedImpassableEnterVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableEnterVolume"));
    this->DividedImpassableExitVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableExitVolume"));
    this->WallVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WallVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

