#include "EndFieldActionActorBalanceMove.h"
#include "EndNavModifierComponent.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndSwitchAreaBoxComponent.h"

AEndFieldActionActorBalanceMove::AEndFieldActionActorBalanceMove() {
    this->BalanceMoveComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("BalanceMoveComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->DividedImpassableEnterVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableEnterVolume"));
    this->DividedImpassableExitVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedImpassableExitVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->AutoBoxRotation = true;
    this->CustomFieldActionName = TEXT("BalanceWalkFieldAction");
}

