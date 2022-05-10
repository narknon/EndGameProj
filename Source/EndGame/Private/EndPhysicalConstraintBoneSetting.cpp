#include "EndPhysicalConstraintBoneSetting.h"

FEndPhysicalConstraintBoneSetting::FEndPhysicalConstraintBoneSetting() {
    this->Mass = 1;
    this->GravityScale = 1;
    this->BlendRate = 1;
    this->VelocityRate = 1;
    this->VelocityBlendRate = 1;
    this->bTranslationOnly = false;
    this->DebugDrawRadius = 1;
}

