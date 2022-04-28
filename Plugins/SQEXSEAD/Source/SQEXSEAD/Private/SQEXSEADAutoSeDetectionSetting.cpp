#include "SQEXSEADAutoSeDetectionSetting.h"

USQEXSEADAutoSeDetectionSetting::USQEXSEADAutoSeDetectionSetting() {
    this->bUseAnalyzerSettingForMotionOnlyMode = false;
    this->bDistanceClippingEnable = true;
    this->ClippingDistance = 1;
    this->bFollowMeshVisibility = true;
    this->bForceDetectListenerTeleportRuntime = false;
}

