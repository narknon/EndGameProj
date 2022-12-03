#include "EndFieldActionActorCrack.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorCrack::AEndFieldActionActorCrack() {
    this->CrackComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("CrackComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PullVolume"));
    this->DividedImpassableEnterVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableEnterVolume"));
    this->DividedImpassableExitVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->bWalkPathMove = false;
    this->CrackMoveType = EEndCrackMoveType::FrontWall;
    this->GoalDistanceOffsetLeft = 0.00f;
    this->GoalDistanceOffsetRight = 0.00f;
    this->ExceptionFlg = false;
}

