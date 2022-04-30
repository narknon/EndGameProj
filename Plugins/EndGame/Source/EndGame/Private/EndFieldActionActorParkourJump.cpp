#include "EndFieldActionActorParkourJump.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorParkourJump::AEndFieldActionActorParkourJump() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->ParkourJumpType = EParkourJumpType::ParkourJumpShort;
    this->ParkourJumpLandingType = EParkourJumpLandingType::ParkourJumpLandingAuto;
    this->JumpAngle = 1;
    this->FlightDuration = 1;
    this->CameraFOV = 1;
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

