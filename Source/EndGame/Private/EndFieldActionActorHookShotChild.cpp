#include "EndFieldActionActorHookShotChild.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndHoocShotTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorHookShotChild::AEndFieldActionActorHookShotChild() {
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->TargetVolume = CreateDefaultSubobject<UEndHoocShotTriggerComponent>(TEXT("TargetVolume"));
    this->ArrivalVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ArrivalVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

