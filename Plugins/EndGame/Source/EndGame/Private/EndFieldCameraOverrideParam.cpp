#include "EndFieldCameraOverrideParam.h"

FEndFieldCameraOverrideParam::FEndFieldCameraOverrideParam() {
    this->bOverrideFOV = false;
    this->OverrideFOV = 1;
    this->bOverrideDistance = false;
    this->OverrideDistance = 1;
    this->bAddAimHeight = false;
    this->AddAimHeight = 1;
    this->bOverrideRotate = false;
    this->bOverrideFollowInverseSpeed = false;
    this->OverrideFollowInverseSpeed = 1;
    this->bOverrideLocationInverseSpeed = false;
    this->OverrideLocationInverseSpeed = 1;
    this->bOverrideAimOffsetY = false;
    this->OverrideAimOffsetY = 1;
}

