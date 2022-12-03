#include "EndPhysicalConstraintBoneSetting.h"

FEndPhysicalConstraintBoneSetting::FEndPhysicalConstraintBoneSetting() {
    this->Mass = 0.00f;
    this->GravityScale = 0.00f;
    this->BlendRate = 0.00f;
    this->VelocityRate = 0.00f;
    this->VelocityBlendRate = 0.00f;
    this->bTranslationOnly = false;
    this->DebugDrawRadius = 0.00f;
}

