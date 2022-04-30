#include "EndBikeAITruckParameter.h"

FEndBikeAITruckParameter::FEndBikeAITruckParameter() {
    this->General_SlideChangeRollToYawBias = 1;
    this->General_MovableSlideLength = 1;
    this->General_RestoreRollInterpSpeed = 1;
    this->General_KeepRelativeDistance = 1;
    this->General_KeepRelativeDistanceAtLastOneEnemy = 1;
    this->General_RelativeSpeedAtLastOneEnemy = 1;
    this->General_MoveDistanceRangeMaxAtLastOneEnemy = 1;
    this->Tackle_BeforePullOverSlide = 1;
    this->Tackle_SlideSpeedOnPullOver = 1;
    this->Tackle_SlideSpeedOnAttack = 1;
    this->Tackle_MaxRotateRateAfterHitWall = 1;
    this->Tackle_MaxAttackingTime = 1;
    this->Tackle_ConstantArrivalTime = 1;
    this->Tackle_MaxSpeed = 1;
    this->Tackle_Acceleration = 1;
    this->GunFire_SlideMoveRate = 1;
    this->GunFire_MaxSlideSpeedLength = 1;
    this->GunFire_MovableSlideLength = 1;
    this->GunFire_SlideMoveRateOnHitWall = 1;
    this->GunFire_DelayStartTime = 1;
    this->GunFire_HatchLoopTime = 1;
    this->GunFire_AfterShootingTime = 1;
    this->GunFire_ShootingInterval = 1;
    this->GunFire_BeginShootTime = 1;
    this->GunFire_EnableSlideMoveDistance = 1;
    this->GunFire_ConstantArrivalTime = 1;
    this->GunFire_MaxSpeed = 1;
    this->GunFire_Acceleration = 1;
    this->GunFire_Count = 1;
    this->GunFire_LaserTargetHeightOffset = 1;
    this->GunFire_BeginLaserEffectTime = 1;
    this->GunFire_ThresholdDamagePoint = 0;
}

