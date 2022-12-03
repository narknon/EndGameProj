#include "EndFieldActionActorParkourJump.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorParkourJump::AEndFieldActionActorParkourJump() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->ParkourJumpType = EParkourJumpType::ParkourJumpShort;
    this->ParkourJumpLandingType = EParkourJumpLandingType::ParkourJumpLandingAuto;
    this->JumpAngle = 45.00f;
    this->FlightDuration = 1.00f;
    this->CameraFOV = 58.00f;
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

