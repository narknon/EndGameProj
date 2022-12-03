#include "EndFieldCameraOverrideParam.h"

FEndFieldCameraOverrideParam::FEndFieldCameraOverrideParam() {
    this->bOverrideFOV = false;
    this->OverrideFOV = 0.00f;
    this->bOverrideDistance = false;
    this->OverrideDistance = 0.00f;
    this->bAddAimHeight = false;
    this->AddAimHeight = 0.00f;
    this->bOverrideRotate = false;
    this->bOverrideFollowInverseSpeed = false;
    this->OverrideFollowInverseSpeed = 0.00f;
    this->bOverrideLocationInverseSpeed = false;
    this->OverrideLocationInverseSpeed = 0.00f;
    this->bOverrideAimOffsetY = false;
    this->OverrideAimOffsetY = 0.00f;
}

