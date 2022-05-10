#include "EndFieldActionActorDuctMove.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndDuctActionSplineComponent.h"

AEndFieldActionActorDuctMove::AEndFieldActionActorDuctMove() {
    this->EnterVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("EnterVolume"));
    this->DuctMoveSplineComponent = CreateDefaultSubobject<UEndDuctActionSplineComponent>(TEXT("DuctMoveSplineComponent"));
}

