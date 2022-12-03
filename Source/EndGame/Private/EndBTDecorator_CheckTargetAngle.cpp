#include "EndBTDecorator_CheckTargetAngle.h"

UEndBTDecorator_CheckTargetAngle::UEndBTDecorator_CheckTargetAngle() {
    this->CheckType = EAngleCheckType::To;
    this->Operator = EEndAiMathCmp::Equal;
    this->CheckTargetAngle = 0.00f;
}

