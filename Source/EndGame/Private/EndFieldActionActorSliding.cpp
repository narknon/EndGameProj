#include "EndFieldActionActorSliding.h"
#include "EndNavModifierComponent.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"

AEndFieldActionActorSliding::AEndFieldActionActorSliding() {
    this->SlidingComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("BalanceMoveComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->VolumeWidth = 1;
    this->CameraFOV = 1;
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

