#include "SQEXSEADAutoSeDetectorSettingSwing.h"

FSQEXSEADAutoSeDetectorSettingSwing::FSQEXSEADAutoSeDetectorSettingSwing() {
    this->bOverrideKnockParameters = false;
    this->KnockDetectVelocityThreshold = 1;
    this->KnockVolumeRangeMin = 1;
    this->KnockVolumeRangeMax = 1;
    this->bOverrideRubParameters = false;
    this->RubDetectVelocityThreshold = 1;
    this->RubVolumeRangeMin = 1;
    this->RubVolumeRangeMax = 1;
}

