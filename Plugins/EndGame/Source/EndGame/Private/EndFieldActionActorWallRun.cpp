#include "EndFieldActionActorWallRun.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorWallRun::AEndFieldActionActorWallRun() {
    this->MoveType = EWallRunMoveType::MoveOneWay_CW;
    this->RangeVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("RangeVolume"));
    this->IconMarkerVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("IconMarkerVolume"));
    this->TargetWaitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetWaitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

