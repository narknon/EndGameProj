#include "EndBikeAISoldier3rdParameter.h"

FEndBikeAISoldier3rdParameter::FEndBikeAISoldier3rdParameter() {
    this->General_RunParallelForwardRange = 1;
    this->MoveToSide_BaseSlide = 1;
    this->MoveToSide_MaxRoadWidth = 1;
    this->MoveToSide_InvalidJumpDistance = 1;
    this->MoveToSide_MaxTime = 1;
    this->MoveToSide_CancelFrontDistance = 1;
    this->MiddleRangeAtk_Interval = 1;
    this->MiddleRangeAtk_SelectRateWhenOnlySelf = 0;
    this->MiddleRangeAtk_SelectRateWhenBothSide = 0;
    this->MiddleRangeAtk_EnableRepeatNum = 0;
    this->MiddleRangeAtk_DamageAmount = 1;
    this->AIMove_RateOfTargetToAlly = 0;
    this->AIMove_LimitDistanceForTargetPlayer = 1;
    this->IdleMove_MinSlideDistance = 1;
    this->IdleMove_MinSlideSpeed = 1;
    this->HitPoint_ToPhase = 1;
}

