#include "EndFieldActionActorCardKeyDoor.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorCardKeyDoor::AEndFieldActionActorCardKeyDoor() {
    this->DoorType = EEndCardKeyDoorType::HoldDown;
    this->TerminalType = EEndCardKeyDoorTerminalType::OneTerminal;
    this->OpenVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("OpenVolume"));
    this->CloseVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("CloseVolume"));
    this->TargetIconFirstVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconFirstVolume"));
    this->TargetIconSecondVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconSecondVolume"));
    this->DividedVersatileVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedVersatileVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->AutoClosingTime = 1;
}

