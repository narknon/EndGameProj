#include "EndFieldActionActorCrouched.h"
#include "EndNavModifierComponent.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"

AEndFieldActionActorCrouched::AEndFieldActionActorCrouched() {
    this->CrouchedType = ECrouchedType::FixCoordinates;
    this->CrouchedComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("CrouchedComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PullVolume"));
    this->DividedImpassableEnterVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableEnterVolume"));
    this->DividedImpassableExitVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->bWalkPathMove = false;
    this->bEnablePassing = false;
    this->CrouchedMoveType = EEndCrouchedMoveType::Default;
    this->GoalDistanceOffsetLeft = 1;
    this->GoalDistanceOffsetRight = 1;
    this->AutoBoxRotation = true;
    this->NavAttributeChange = false;
}

