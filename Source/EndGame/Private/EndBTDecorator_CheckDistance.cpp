#include "EndBTDecorator_CheckDistance.h"

UEndBTDecorator_CheckDistance::UEndBTDecorator_CheckDistance() {
    this->Operator = EEndAiMathCmp::Equal;
    this->CheckDistance = 1;
    this->DistanceType = EDistanceType::Dist2D;
}

