#include "SummonAbilityChoice.h"

FSummonAbilityChoice::FSummonAbilityChoice() {
    this->Priority = 0;
    this->MinDistance = 1;
    this->MaxDistance = 1;
    this->MinHeight = 1;
    this->MaxHeight = 1;
    this->InfluenceCenter = ESummonAbilityInfluenceCenter::eNone;
    this->InfluenceRadius = 1;
    this->InfluenceTargets = 0;
    this->SelfToGroundDist = 1;
    this->TargetToGroundDist = 1;
    this->Probability = 1;
}

