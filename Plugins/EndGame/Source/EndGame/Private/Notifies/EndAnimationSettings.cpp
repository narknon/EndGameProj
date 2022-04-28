#include "EndAnimationSettings.h"

UEndAnimationSettings::UEndAnimationSettings() {
    this->IKTerrainTraceObjectTypes.AddDefaulted(1);
    this->IKEffectTraceObjectTypes.AddDefaulted(2);
    this->LocomotionQuickTurnAngularVelocity = 1;
    this->TurnTimer = 1;
    this->WalkRunStartInterruptionRatioThresholdNeutral = 1;
    this->WalkRunStartInterruptionRatioThresholdBattle = 1;
    this->WalkRunStartIgnoreRotationRateThreshold = 1;
    this->WalkRunStartAdditiveRootRotationScaleMax = 1;
    this->RotationRateInterpSpeed = 1;
    this->AttackJumpFallGravityScale = 1;
    this->RunEndTimer = 1;
    this->RunToDashBlendInputThreshold = 1;
    this->MaxWalkNoise = 1;
    this->WalkNoiseSpeedMultiplier = 1;
    this->DashWallContactMaxDot = 1;
    this->BlendSpaceWalkRunStartMoveSpeedInterpSpeed = 1;
    this->BlendSpaceWalkRunLoopMoveSpeedInterpSpeed = 1;
    this->BlendSpaceWalkRunMoveSlopeInterpSpeed = 1;
    this->BlendSpaceStrafingWalkDirectionInterpSpeed = 1;
    this->WalkInputPoolTime = 1;
    this->IdleSwitchBehaviorDashInputBlockTime = 1;
    this->RunSwitchBehaviorDashInputBlockTime = 1;
    this->Direction90_MaxThreshold_0 = 1;
    this->Direction90_MaxThreshold_90 = 1;
    this->Direction45_MaxThreshold_0 = 1;
    this->Direction45_MaxThreshold_45 = 1;
    this->Direction45_MaxThreshold_90 = 1;
    this->Direction45_MaxThreshold_135 = 1;
    this->RequestMoveToOverrideRotationRate = 1;
    this->IdleLoopTurnAngleTolerance = 1;
    this->ZeroTurnRotationRate = 1;
    this->ContinuationTurnRemainingTime = 1;
    this->LandAnimTimer = 1;
    this->LaunchWakeUpMinTime = 1;
    this->LaunchMinRagdollAirTime = 1;
    this->LaunchWakeUpCrashLandingIKTime = 1;
    this->PowerPerRagdollPenetrationDepth = 1;
    this->RagdollCollisionShapeInflation = 1;
    this->MaxOverlapDuration = 1;
    this->MinRagdollPushMagnitude = 1;
    this->MaxRagdollPushMagnitude = 1;
    this->BaseBodyVolume = 1;
    this->ForceRampUpTime = 1;
    this->bShowRagdollDebugInfo = false;
    this->FieldLookAtSlomoRateMin = 1;
    this->FieldLookAtSlomoActiveTime = 1;
    this->FieldLookAtSlomoInterpSpeed = 1;
    this->FieldLookAtSlomoReverseInterpSpeed = 1;
    this->BlendTimeMinWhenWaitMode = 1;
    this->TurnAngularSpeed = 1;
    this->TurnAngularSpeedOnPlayerInput = 1;
    this->BikeYawRotationSpeed = 1;
    this->MaxTurnAngleToRollAngleFactor = 1;
    this->BikeGravityScale = 1;
    this->DitchRoughness = 1;
    this->DitchRoughnessInterpSpeed = 1;
    this->SlideRateInterpSpeed = 1;
    this->BikeBlendSpaceMultiplier = 1;
    this->bShowBikeDebugScreenInfo = false;
    this->BikeWindStrengthMultiplier = 1;
    this->BikeWindFrequency = 1;
    this->BikeWindAmplitude = 1;
    this->BikeRagdollSmallHitStrength = 1;
    this->BikeRagdollLargeHitStrength = 1;
    this->BikeMaxBankAngle = 1;
    this->BikeBankAngleInterpIncreaseSpeed = 1;
    this->BikeBankAngleInterpDecreaseSpeed = 1;
    this->BikePlayerAdditiveBlendspaceSpeedMultiplier = 1;
    this->BikeRiderBlendSpaceCurve = EAlphaBlendOption::Linear;
    this->HookShotSpeed = 1;
    this->HookShotMinPitchAngle = 1;
    this->HookShotLandingAdjustRotationTime = 1;
    this->HookSplineBeginTangentScale = 1;
    this->HookSplineEndTangentScale = 1;
    this->HookLaunchRootAdjustDistance = 1;
    this->HookAdjustRotationLerpDistance = 1;
    this->HookPreLandingAdjustRotationLerpDistance = 1;
    this->TreasureBoxDistance = 1;
    this->TreasureBoxDistanceLR = 1;
    this->TreasureBoxPickUpDistance = 1;
    this->TreasureBoxLocationSmoothingSpeed = 1;
    this->TreasureBoxRotationSmoothingSpeed = 1;
    this->TreasureBoxTurnTolerance = 1;
    this->TreasureBoxWalkRunEndWaitTime = 1;
    this->PushButtonLocationSmoothingSpeed = 1;
    this->PushButtonRotationSmoothingSpeed = 1;
    this->PushButtonTurnTolerance = 1;
    this->PushButtonWalkRunEndWaitTime = 1;
    this->FaceGuardLoopTimeMin = 1;
    this->AnimationContactWalkTime = 1;
    this->MaxWallSlideDot = 1;
    this->MinWallSlideAngle = 1;
    this->LadderPhysicalConstraintBlendInTime = 1;
    this->LadderPhysicalConstraintBlendOutTime = 1;
    this->AutoSaccadeAdditiveEyeRotationBySpineX = 1;
    this->AutoSaccadeAdditiveEyeRotationBySpineY = 1;
    this->AutoSaccadeFocusChangeAngle = 1;
    this->AutoSaccadeFocusClusteringAngle = 1;
    this->AutoSaccadeRandomMoveFrame = 0;
    this->DisableLandingLOD = 0;
    this->DisableFacialSolverLOD = 0;
    this->DisableFacialEyeMoveSolverLOD = 0;
    this->DisableFacialEyeMoveSolverLODLight = 0;
}

