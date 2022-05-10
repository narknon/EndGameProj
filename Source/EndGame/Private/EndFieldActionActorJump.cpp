#include "EndFieldActionActorJump.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorJump::AEndFieldActionActorJump() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->JumpDirection = ENavLinkDirection::BothWays;
    this->JumpDistance = 1;
    this->JumpType = EJumpType::JumpOff;
    this->StartJumpType = EJumpStartType::FixCoordinates;
    this->HiddenEffect = false;
    this->NotUpdateVolume = false;
    this->StraddleExtensions = false;
    this->JumpAngleToLeft = 1;
    this->FlightDurationToLeft = 1;
    this->DrawRightToLeft = true;
    this->JumpAngleToRight = 1;
    this->FlightDurationToRight = 1;
    this->DrawLeftToRight = false;
    this->ToRightOverrideVelocity = 1;
    this->ToLeftOverrideVelocity = 1;
    this->OverrideHeight = 1;
    this->EnableConnectJump = false;
}

