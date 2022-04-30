#include "EndPhysicalConstraintSetting_Distance.h"

FEndPhysicalConstraintSetting_Distance::FEndPhysicalConstraintSetting_Distance() {
    this->BoneInvMassBias0 = 1;
    this->BoneInvMassBias1 = 1;
    this->CompressionStiffness = 1;
    this->StretchStiffness = 1;
    this->OverrideDistance = 1;
    this->bCalculate2D = false;
}

