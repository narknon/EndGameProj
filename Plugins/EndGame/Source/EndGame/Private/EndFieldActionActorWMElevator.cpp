#include "EndFieldActionActorWMElevator.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorWMElevator::AEndFieldActionActorWMElevator() {
    this->OutSideVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("OutSideVolume"));
    this->InSideVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("InSideVolume"));
    this->InSideCollisionVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("InSideCollisionVolume"));
    this->LeaderMovePointVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("LeaderMovePointVolume"));
    this->PartyMovePointVolume1 = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PartyMovePointVolume1"));
    this->PartyMovePointVolume2 = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PartyMovePointVolume2"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->bIsReverseBackEnvPlay = false;
}

