#include "EndFieldActionActorTarzanRope.h"
#include "EndFieldActionTriggerComponent.h"
#include "Components/BoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorTarzanRope::AEndFieldActionActorTarzanRope() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->TargetIconEnterComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconEnterComponent"));
    this->TargetIconExitComponent = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconExitComponent"));
    this->GoalTargetComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalTargetComponent"));
    this->TwoStepsMore = false;
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

