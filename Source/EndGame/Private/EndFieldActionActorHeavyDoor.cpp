#include "EndFieldActionActorHeavyDoor.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorHeavyDoor::AEndFieldActionActorHeavyDoor() {
    this->LongPushTime = 1;
    this->DisableForceAutoClose = false;
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->PullVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PullVolume"));
    this->DividedVersatileVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedVersatileVolume"));
    this->DividedImpassableVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableVolume"));
    this->OpendDoorVolumeLeft = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("OpendDoorVolumeLeft"));
    this->OpendDoorVolumeRight = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("OpendDoorVolumeRight"));
    this->OpendDoorVolumeLeft2 = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("OpendDoorVolumeLeft2"));
    this->OpendDoorVolumeRight2 = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("OpendDoorVolumeRight2"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

