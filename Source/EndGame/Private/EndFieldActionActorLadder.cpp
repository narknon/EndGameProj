#include "EndFieldActionActorLadder.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorLadder::AEndFieldActionActorLadder() {
    this->RungCount = 0;
    this->UpperSpace = 1;
    this->LowerSpace = 1;
    this->IsBrokenLadder = false;
    this->ExceptionFlg = false;
    this->UpperVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("UpperVolume"));
    this->LowerVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("LowerVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->LinkType = ENavLinkDirection::BothWays;
}

