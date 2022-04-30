#include "SQEXSEADAutoSeDetectorSettingRustle.h"

FSQEXSEADAutoSeDetectorSettingRustle::FSQEXSEADAutoSeDetectorSettingRustle() {
    this->bEnableArmRustleElbow = false;
    this->bOverrideArmRustleElbowVolumeRanges = false;
    this->ArmRustleElbowRVelThreshold = 1;
    this->ArmRustleElbowRelativeVelocityVolumeRangeMin = 1;
    this->ArmRustleElbowRelativeVelocityVolumeRangeMax = 1;
    this->bEnableArmRustleHandWave = false;
    this->bOverrideArmRustleHandWaveParameters = false;
    this->ArmRustleHandWaveRVelThreshold = 1;
    this->ArmRustleHandWaveVolumeRangeMin = 1;
    this->ArmRustleHandWaveVolumeRangeMax = 1;
    this->bEnableFootRustleCrotch = false;
    this->bOverrideFootRustleCrotchParameters = false;
    this->FootRustleCrotchFTRelVelThresholdWalk = 1;
    this->FootRustleCrotchFTRelVelThresholdRun = 1;
    this->FootRustleCrotchVolumeRangeMin = 1;
    this->FootRustleCrotchVolumeRangeMax = 1;
    this->bEnableFootRustle = false;
    this->bOverrideFootRustleParameters = false;
    this->FootRustleRVelThresholdWalk = 1;
    this->FootRustleRVelThresholdRun = 1;
    this->FootRustleVolumeRangeMin = 1;
    this->FootRustleVolumeRangeMax = 1;
    this->bEnableFootRustleBend = false;
    this->bOverrideFootRustleBendParameters = false;
    this->FootRustleBendBendThreshold = 1;
    this->FootRustleBendStretchThreshold = 1;
    this->FootRustleBendVolumeRangeMin = 1;
    this->FootRustleBendVolumeRangeMax = 1;
    this->DetectionSuppressTimeDefault = 1;
    this->DetectionSuppressTimeForFast = 1;
}

