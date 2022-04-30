#include "EndPathWaySplineActor.h"
#include "Components/SplineComponent.h"

AEndPathWaySplineActor::AEndPathWaySplineActor() {
    this->PathWayBaseWidth = 1;
    this->PathWayOffsetWidth = 1;
    this->PathWaySpace = 1;
    this->ArrowLength = 1;
    this->ArrowSize = 1;
    this->ArrowThickness = 1;
    this->PathWayComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

