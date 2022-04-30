#include "EndFieldActionActorCrack.h"
#include "EndNavModifierComponent.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"

AEndFieldActionActorCrack::AEndFieldActionActorCrack() {
    this->CrackComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("CrackComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PullVolume"));
    this->DividedImpassableEnterVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableEnterVolume"));
    this->DividedImpassableExitVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->bWalkPathMove = false;
    this->CrackMoveType = EEndCrackMoveType::FrontWall;
    this->GoalDistanceOffsetLeft = 1;
    this->GoalDistanceOffsetRight = 1;
    this->ExceptionFlg = false;
}

