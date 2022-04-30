#include "SQEXSEADAutoSeDetectorSettingFootStep.h"

FSQEXSEADAutoSeDetectorSettingFootStep::FSQEXSEADAutoSeDetectorSettingFootStep() {
    this->bEnableFootStepWalkRun = false;
    this->bOverrideFootStepParameters = false;
    this->FootStepWalkVolumeRangeMin = 1;
    this->FootStepWalkVolumeRangeMax = 1;
    this->FootStepRunVolumeRangeMin = 1;
    this->FootStepRunVolumeRangeMax = 1;
    this->FootStepKEnergyVolumeRangeMin = 1;
    this->FootStepKEnergyVolumeRangeMax = 1;
    this->bEnableFootShuffle = false;
    this->bOverrideFootShuffleParameters = false;
    this->bEnableFootShuffleLessMove = false;
    this->FootShuffleAssumeBodyStopVelocityThreshold = 1;
    this->FootShuffleDetectFootVelocityThreshold = 1;
    this->FootShuffleVolumeRangeMin = 1;
    this->FootShuffleVolumeRangeMax = 1;
    this->bEnableFootShuffleInMotion = false;
    this->FootShuffleInMotionFootAccelThreshold = 1;
    this->FootShuffleInMotionVolumeRangeMin = 1;
    this->FootShuffleInMotionVolumeRangeMax = 1;
    this->bEnableFootShuffleTurn = false;
    this->FootShuffleTurnMoveDirRotVelocityRateThreshold = 1;
    this->FootShuffleTurnFootVelocityThreshold = 1;
    this->FootShuffleTurnVolumeRangeMin = 1;
    this->FootShuffleTurnVolumeRangeMax = 1;
    this->bOverrideLandNormalParameters = false;
    this->LandNormalAssumeFlyTime = 1;
    this->LandNormalEnoughVelocity = 1;
    this->LandNormalVolumeRangeMin = 1;
    this->LandNormalVolumeRangeMax = 1;
    this->bEnableLandHard = false;
    this->bOverrideLandHardParameters = false;
    this->LandHardAssumeFlyTime = 1;
    this->LandHardEnoughVelocity = 1;
    this->LandHardVolumeRangeMin = 1;
    this->LandHardVolumeRangeMax = 1;
}

