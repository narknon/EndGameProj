#include "EndBikeAIHelicopterParameter.h"

FEndBikeAIHelicopterParameter::FEndBikeAIHelicopterParameter() {
    this->Move_DefaultYow = 1;
    this->Move_DefaultPitch = 1;
    this->Move_BaseHeight = 1;
    this->Move_WithinRoadSlide = 1;
    this->Move_MaxPitchAngle = 1;
    this->Move_MaxPitchSpeed = 1;
    this->Move_PitchDefaultSpeed = 1;
    this->Move_MaxSlideRollAngle = 1;
    this->Move_WallHeight = 1;
    this->Move_CenterObstacleHeight = 1;
    this->Move_SplineOffsetForCalcCurvature = 1;
    this->Move_CurvatureMaxDeltaYaw = 1;
    this->Move_MaxSlideOnNotAttack = 1;
    this->Atk_SelectPlayerAsTargetRate = 0;
    this->Atk_HitPointOfCancelAttack = 0;
    this->LookAt_RecoveryDelayTime = 1;
    this->LookAt_YawSpeed = 1;
    this->LookAt_YawAccel = 1;
    this->LookAt_YawArrivalTime = 1;
    this->GunFire_SpeedForFirstStep = 1;
    this->GunFire_DistanceForFirstStep = 1;
    this->GunFire_MaxTimeOfFitstStep = 1;
    this->GunFire_CorrectionRate = 1;
    this->GunFire_YawLimit = 1;
    this->GunFire_Interval = 1;
    this->Missile_InitDistance = 1;
    this->Missile_InitKeepTime = 1;
    this->Missile_InterpSpeed = 1;
    this->bUseJumpAttack = false;
    this->JumpArea_DistanceLv0 = 1;
    this->JumpArea_DistanceLv1 = 1;
    this->JumpArea_DistanceLv2 = 1;
    this->JumpArea_DistanceLv3 = 1;
    this->JumpArea_StartForwardOffset = 1;
    this->JumpArea_MoveBackwardStartTime = 1;
    this->JumpArea_MoveBackwardDistance = 1;
    this->JumpArea_MoveBackwardTime = 1;
    this->JumpArea_WaitTimeIfReceiveJumpAbility = 1;
    this->Obstacle_BeginAvoidLength = 1;
    this->StopToExit_SlideInterpSpeed = 1;
    this->StopToExit_HeightSpeed = 1;
    this->StopToExit_RelativeDistance = 1;
    this->StopToExit_RemoveTimer = 1;
    this->TransitionNoAttack_DamageValue = 0;
    this->TransitionNoAttack_TimeValue = 1;
    this->IsEventHelicopter = false;
}

