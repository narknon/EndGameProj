#include "EndFieldActionActorLadder.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorLadder::AEndFieldActionActorLadder() {
    this->RungCount = 20;
    this->UpperSpace = 60.00f;
    this->LowerSpace = 60.00f;
    this->IsBrokenLadder = false;
    this->ExceptionFlg = false;
    this->UpperVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("UpperVolume"));
    this->LowerVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("LowerVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->LinkType = ENavLinkDirection::BothWays;
}

