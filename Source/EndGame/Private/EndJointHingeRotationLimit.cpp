#include "EndJointHingeRotationLimit.h"

FEndJointHingeRotationLimit::FEndJointHingeRotationLimit() {
    this->Axis = EEndJointLimitAxis::X;
    this->Min = 1;
    this->Max = 1;
}

