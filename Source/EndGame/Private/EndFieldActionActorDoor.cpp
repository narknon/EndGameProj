#include "EndFieldActionActorDoor.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"
#include "EndSwitchAreaBoxComponent.h"

AEndFieldActionActorDoor::AEndFieldActionActorDoor() {
    this->bApplyUpdateOpenNavArea = false;
    this->DoorType = EDoorType::NormalDoor;
    this->DisableForceAutoClose = false;
    this->DoorActiveEffectType = EDoorActiveEffectType::ActiveNone;
    this->bTargetIconAdjustment = false;
    this->FindControllerKey = -1;
    this->CameraFlavorDatatableName = TEXT("WalkThroughDoorAction");
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

