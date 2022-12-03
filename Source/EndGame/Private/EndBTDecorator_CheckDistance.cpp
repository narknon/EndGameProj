#include "EndBTDecorator_CheckDistance.h"

UEndBTDecorator_CheckDistance::UEndBTDecorator_CheckDistance() {
    this->Operator = EEndAiMathCmp::Equal;
    this->CheckDistance = 0.00f;
    this->DistanceType = EDistanceType::Dist3D;
}

