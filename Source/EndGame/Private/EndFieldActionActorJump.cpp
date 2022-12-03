#include "EndFieldActionActorJump.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorJump::AEndFieldActionActorJump() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->JumpDirection = ENavLinkDirection::BothWays;
    this->JumpDistance = 200.00f;
    this->JumpType = EJumpType::JumpOff;
    this->StartJumpType = EJumpStartType::FixCoordinates;
    this->HiddenEffect = false;
    this->NotUpdateVolume = false;
    this->StraddleExtensions = false;
    this->JumpAngleToLeft = 45.00f;
    this->FlightDurationToLeft = 1.00f;
    this->DrawRightToLeft = true;
    this->JumpAngleToRight = 45.00f;
    this->FlightDurationToRight = 1.00f;
    this->DrawLeftToRight = false;
    this->ToRightOverrideVelocity = 0.00f;
    this->ToLeftOverrideVelocity = 0.00f;
    this->OverrideHeight = 0.00f;
    this->EnableConnectJump = false;
}

