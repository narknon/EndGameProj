#include "EndSplineActorBase.h"
#include "Components/SplineComponent.h"

AEndSplineActorBase::AEndSplineActorBase() {
    this->SplineMoveComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineMoveComponent"));
    this->IsLoop = false;
}

