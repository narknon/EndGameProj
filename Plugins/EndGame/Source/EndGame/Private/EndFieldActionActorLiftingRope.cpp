#include "EndFieldActionActorLiftingRope.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorLiftingRope::AEndFieldActionActorLiftingRope() {
    this->MoveType = ELiftingRopeActorMoveType::UpperToLower;
    this->UpperVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("UpperVolume"));
    this->LowerVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("LowerVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

