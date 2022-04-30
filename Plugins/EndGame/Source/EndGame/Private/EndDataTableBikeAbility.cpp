#include "EndDataTableBikeAbility.h"

FEndDataTableBikeAbility::FEndDataTableBikeAbility() {
    this->AbilityType = 0;
    this->NormalRange = 0;
    this->DistanceType = 0;
    this->CoolDownTime = 1;
    this->ExclusiveGroup = 0;
    this->TargetToPlayerOdds = 0;
    this->TargetToAllyOdds = 0;
    this->AttackerPositionCondition = 0;
    this->CenterPositionOffset = 1;
    this->TargetPositionCondition = 0;
    this->TargetSearchDistanceMin = 1;
    this->TargetSearchDistanceMax = 1;
    this->TargetSearchDiffSplineMileageMin = 1;
    this->TargetSearchDiffSplineMileageMax = 1;
    this->SuperArmorSincePrepare = 0;
    this->NotCancelAtOutOfRange = 0;
    this->PrepareAttackTimeout = 1;
    this->ForceAttackTime = 1;
    this->BurstDamageBonus = 1;
}

