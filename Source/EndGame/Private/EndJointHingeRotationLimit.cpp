#include "EndJointHingeRotationLimit.h"

FEndJointHingeRotationLimit::FEndJointHingeRotationLimit() {
    this->Axis = EEndJointLimitAxis::X;
    this->Min = 0.00f;
    this->Max = 0.00f;
}

