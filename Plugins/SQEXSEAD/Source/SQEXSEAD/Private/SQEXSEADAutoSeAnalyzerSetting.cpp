#include "SQEXSEADAutoSeAnalyzerSetting.h"

FSQEXSEADAutoSeAnalyzerSetting::FSQEXSEADAutoSeAnalyzerSetting() {
    this->bOverrideAssumeFootMotionlessMoveLenInWorld = false;
    this->AssumeFootMotionlessMoveLenInWorld = 1;
    this->bOverrideAssumeBodyRunngingVelocity = false;
    this->AssumeBodyRunngingVelocity = 1;
    this->bOverrideAutoCalcFootGroundedThresholdRatio = false;
    this->AutoCalcFootGroundedThresholdRatio = 1;
    this->bAutoWarpDetectionEnable = false;
}

