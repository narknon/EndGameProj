#include "EndBikeSpline.h"
#include "EndBikeSplineComponent.h"

AEndBikeSpline::AEndBikeSpline() {
    this->mSplineComponent = CreateDefaultSubobject<UEndBikeSplineComponent>(TEXT("BikeSplineComponent"));
    this->IsLoop = false;
}

