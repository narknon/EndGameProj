#include "SQEXSEADAutoSeDetectorSettingMisc.h"

FSQEXSEADAutoSeDetectorSettingMisc::FSQEXSEADAutoSeDetectorSettingMisc() {
    this->bEnableTurnDetection = false;
    this->bOverrideTurnSettings = false;
    this->TurnRotVelocityRateThreshold = 1;
    this->TurnVolumeMinRotVelRate = 1;
    this->TurnVolumeMaxRotVelRate = 1;
    this->bEnableHeadRotDetection = false;
    this->bOverrideHeadRotSettings = false;
    this->HeadRotRVelThreshold = 1;
    this->HeadRotVolumeMinRVel = 1;
    this->HeadRotVolumeMaxRVel = 1;
    this->bEnableBowDetection = false;
    this->bOverrideBowSettings = false;
    this->AssumeWaistLessMoveVelocity = 1;
    this->ShoulderRVelThreshold = 1;
    this->bUseShouldersRVelAverage = false;
    this->BowVolumeMinRVel = 1;
    this->BowVolumeMaxRVel = 1;
    this->bEnableRagdollDetection = false;
    this->bOverrideRagdollSettings = false;
    this->RagdollBounceEnoughVel = 1;
    this->RagdollBounceVolumeMinVel = 1;
    this->RagdollBounceVolumeMaxVel = 1;
    this->RagdollFricativeVelThreshold = 1;
    this->RagdollFricativeVolumeMinVel = 1;
    this->RagdollFricativeVolumeMaxVel = 1;
}

