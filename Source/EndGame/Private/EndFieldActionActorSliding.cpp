#include "EndFieldActionActorSliding.h"
#include "EndFieldActionSplineComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorSliding::AEndFieldActionActorSliding() {
    this->SlidingComponent = CreateDefaultSubobject<UEndFieldActionSplineComponent>(TEXT("BalanceMoveComponent"));
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->ExitVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("ExitVolume"));
    this->VolumeWidth = 100.00f;
    this->CameraFOV = 58.00f;
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}

