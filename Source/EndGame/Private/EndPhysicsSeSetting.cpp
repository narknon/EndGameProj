#include "EndPhysicsSeSetting.h"

FEndPhysicsSeSetting::FEndPhysicsSeSetting() {
    this->bEnable = false;
    this->HitImpulseThreshold = 1;
    this->HitDistanceThreshold = 1;
    this->HitImpulseSizeMax = 1;
    this->HitAttenuationSetting = NULL;
    this->HitConcurrencySetting = NULL;
    this->FractureImpulseSizeMax = 1;
    this->FractureAttenuationSetting = NULL;
    this->bHitSensitive = false;
    this->HitSensitiveScalingValue = 1;
}

