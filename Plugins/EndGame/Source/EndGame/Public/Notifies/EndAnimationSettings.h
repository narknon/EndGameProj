#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "Engine/EngineTypes.h"
#include "EndAnimationSettings.generated.h"

UCLASS(Config=DefaultEngine)
class ENDGAME_API UEndAnimationSettings : public UObject {
    
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> IKTerrainTraceObjectTypes;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> IKEffectTraceObjectTypes;
    
    UPROPERTY(Config, EditAnywhere)
    float LocomotionQuickTurnAngularVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float TurnTimer;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkRunStartInterruptionRatioThresholdNeutral;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkRunStartInterruptionRatioThresholdBattle;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkRunStartIgnoreRotationRateThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkRunStartAdditiveRootRotationScaleMax;
    
    UPROPERTY(Config, EditAnywhere)
    float RotationRateInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float AttackJumpFallGravityScale;
    
    UPROPERTY(Config, EditAnywhere)
    float RunEndTimer;
    
    UPROPERTY(Config, EditAnywhere)
    float RunToDashBlendInputThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxWalkNoise;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkNoiseSpeedMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float DashWallContactMaxDot;
    
    UPROPERTY(Config, EditAnywhere)
    float BlendSpaceWalkRunStartMoveSpeedInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BlendSpaceWalkRunLoopMoveSpeedInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BlendSpaceWalkRunMoveSlopeInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BlendSpaceStrafingWalkDirectionInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float WalkInputPoolTime;
    
    UPROPERTY(Config, EditAnywhere)
    float IdleSwitchBehaviorDashInputBlockTime;
    
    UPROPERTY(Config, EditAnywhere)
    float RunSwitchBehaviorDashInputBlockTime;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction90_MaxThreshold_0;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction90_MaxThreshold_90;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction45_MaxThreshold_0;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction45_MaxThreshold_45;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction45_MaxThreshold_90;
    
    UPROPERTY(Config, EditAnywhere)
    float Direction45_MaxThreshold_135;
    
    UPROPERTY(Config, EditAnywhere)
    float RequestMoveToOverrideRotationRate;
    
    UPROPERTY(Config, EditAnywhere)
    float IdleLoopTurnAngleTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float ZeroTurnRotationRate;
    
    UPROPERTY(Config, EditAnywhere)
    float ContinuationTurnRemainingTime;
    
    UPROPERTY(Config, EditAnywhere)
    float LandAnimTimer;
    
    UPROPERTY(Config, EditAnywhere)
    float LaunchWakeUpMinTime;
    
    UPROPERTY(Config, EditAnywhere)
    float LaunchMinRagdollAirTime;
    
    UPROPERTY(Config, EditAnywhere)
    float LaunchWakeUpCrashLandingIKTime;
    
    UPROPERTY(Config, EditAnywhere)
    float PowerPerRagdollPenetrationDepth;
    
    UPROPERTY(Config, EditAnywhere)
    float RagdollCollisionShapeInflation;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxOverlapDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float MinRagdollPushMagnitude;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxRagdollPushMagnitude;
    
    UPROPERTY(Config, EditAnywhere)
    float BaseBodyVolume;
    
    UPROPERTY(Config, EditAnywhere)
    float ForceRampUpTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowRagdollDebugInfo;
    
    UPROPERTY(Config, EditAnywhere)
    float FieldLookAtSlomoRateMin;
    
    UPROPERTY(Config, EditAnywhere)
    float FieldLookAtSlomoActiveTime;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D FieldLookAtSlomoWaitTimeRange;
    
    UPROPERTY(Config, EditAnywhere)
    float FieldLookAtSlomoInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float FieldLookAtSlomoReverseInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BlendTimeMinWhenWaitMode;
    
    UPROPERTY(Config, EditAnywhere)
    float TurnAngularSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float TurnAngularSpeedOnPlayerInput;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeYawRotationSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxTurnAngleToRollAngleFactor;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeGravityScale;
    
    UPROPERTY(Config, EditAnywhere)
    float DitchRoughness;
    
    UPROPERTY(Config, EditAnywhere)
    float DitchRoughnessInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float SlideRateInterpSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeBlendSpaceMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowBikeDebugScreenInfo;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeWindStrengthMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeWindFrequency;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeWindAmplitude;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeRagdollSmallHitStrength;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeRagdollLargeHitStrength;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeMaxBankAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeBankAngleInterpIncreaseSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BikeBankAngleInterpDecreaseSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float BikePlayerAdditiveBlendspaceSpeedMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    EAlphaBlendOption BikeRiderBlendSpaceCurve;
    
    UPROPERTY(Config, EditAnywhere)
    FVector RiderRagdollKnockbackForce;
    
    UPROPERTY(Config, EditAnywhere)
    float HookShotSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float HookShotMinPitchAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float HookShotLandingAdjustRotationTime;
    
    UPROPERTY(Config, EditAnywhere)
    float HookSplineBeginTangentScale;
    
    UPROPERTY(Config, EditAnywhere)
    float HookSplineEndTangentScale;
    
    UPROPERTY(Config, EditAnywhere)
    float HookLaunchRootAdjustDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float HookAdjustRotationLerpDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float HookPreLandingAdjustRotationLerpDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxDistanceLR;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxPickUpDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxLocationSmoothingSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxRotationSmoothingSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxTurnTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float TreasureBoxWalkRunEndWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float PushButtonLocationSmoothingSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float PushButtonRotationSmoothingSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float PushButtonTurnTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    float PushButtonWalkRunEndWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float FaceGuardLoopTimeMin;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D AnimationCoolDownTimeRange;
    
    UPROPERTY(Config, EditAnywhere)
    float AnimationContactWalkTime;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxWallSlideDot;
    
    UPROPERTY(Config, EditAnywhere)
    float MinWallSlideAngle;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> PhysicalConstraintTraceObjectTypes;
    
    UPROPERTY(Config, EditAnywhere)
    float LadderPhysicalConstraintBlendInTime;
    
    UPROPERTY(Config, EditAnywhere)
    float LadderPhysicalConstraintBlendOutTime;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D AutoSaccadeEyeRotationRangeX;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D AutoSaccadeEyeRotationRangeY;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoSaccadeAdditiveEyeRotationBySpineX;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoSaccadeAdditiveEyeRotationBySpineY;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoSaccadeFocusChangeAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoSaccadeFocusClusteringAngle;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AutoSaccadeRandomMoveFrame;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D AutoSaccadeRandomMoveRotationRangeX;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D AutoSaccadeRandomMoveRotationRangeY;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DisableLandingLOD;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DisableFacialSolverLOD;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DisableFacialEyeMoveSolverLOD;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DisableFacialEyeMoveSolverLODLight;
    
    UEndAnimationSettings();
};
