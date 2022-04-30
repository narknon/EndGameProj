#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Impulse.h"
#include "eBodyParts.h"
#include "UObject/NoExportTypes.h"
#include "BodyDriver_BipedBalanceTuningSet.generated.h"

UCLASS(Blueprintable)
class BODYDRIVERPLUGIN_API UBodyDriver_BipedBalanceTuningSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse PushImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse WeakImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse MediumImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse StrongImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse RunningImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse MediumMeleeImpulseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse RunningMeleeImpulseData;
    
    UPROPERTY(EditAnywhere)
    float COMVelFac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRampedCOMVelFac;
    
    UPROPERTY(EditAnywhere)
    float SideMultMin;
    
    UPROPERTY(EditAnywhere)
    float HipHeightBlendRate;
    
    UPROPERTY(EditAnywhere)
    float AngMagClampBoth;
    
    UPROPERTY(EditAnywhere)
    float AngMagClampPlanar;
    
    UPROPERTY(EditAnywhere)
    float LinMagClampBoth;
    
    UPROPERTY(EditAnywhere)
    float MinDistPelvis;
    
    UPROPERTY(EditAnywhere)
    float MaxDistPelvis;
    
    UPROPERTY(EditAnywhere)
    float LinUPMagClampBoth;
    
    UPROPERTY(EditAnywhere)
    float LinUPMagMaxClampBoth;
    
    UPROPERTY(EditAnywhere)
    float LindampingMoving;
    
    UPROPERTY(EditAnywhere)
    float LinUPdampingMoving;
    
    UPROPERTY(EditAnywhere)
    float PelvisSpaceGoalUPClampDistMax;
    
    UPROPERTY(EditAnywhere)
    float PelvisSpaceGoalPlanarClampDist;
    
    UPROPERTY(EditAnywhere)
    float FootLandCompression;
    
    UPROPERTY(EditAnywhere)
    float BoostHipOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxHipHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float FacingBasedOnVelMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReduceDampingFightingDesiredDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncreaseDampingOverTime;
    
    UPROPERTY(EditAnywhere)
    float StaggerRiseClamp;
    
    UPROPERTY(EditAnywhere)
    float StaggerRiseClampSwinging;
    
    UPROPERTY(EditAnywhere)
    float StaggerRiseClampTwistedAndBehind;
    
    UPROPERTY(EditAnywhere)
    float StaggerRiseClampWoundedLeg;
    
    UPROPERTY(EditAnywhere)
    float StaggerUltimateFacingDirectionMagBothPlanted;
    
    UPROPERTY(EditAnywhere)
    float StaggerUltimateFacingDirectionMagSwinging;
    
    UPROPERTY(EditAnywhere)
    float MaxErrorStepNeutral;
    
    UPROPERTY(EditAnywhere)
    float ShortestPlantMax;
    
    UPROPERTY(EditAnywhere)
    float WaitTimeBetweenLiftPreps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlantedFeet;
    
    UPROPERTY(EditAnywhere)
    float MaxPhaseComputeStep;
    
    UPROPERTY(EditAnywhere)
    float MinPhaseComputeStep;
    
    UPROPERTY(EditAnywhere)
    float RootPartSideOffset;
    
    UPROPERTY(EditAnywhere)
    float BufftopRange;
    
    UPROPERTY(EditAnywhere)
    float BuffbottomRange;
    
    UPROPERTY(EditAnywhere)
    float BufftopVal;
    
    UPROPERTY(EditAnywhere)
    float BuffbottomVal;
    
    UPROPERTY(EditAnywhere)
    float BuffAdditive;
    
    UPROPERTY(EditAnywhere)
    float MaxErrorStepNeutralActual;
    
    UPROPERTY(EditAnywhere)
    float FinalStepSpeedThresh;
    
    UPROPERTY(EditAnywhere)
    float ReducedSwingTimeMult;
    
    UPROPERTY(EditAnywhere)
    float RangeContinueStep;
    
    UPROPERTY(EditAnywhere)
    float StepCCDWeight;
    
    UPROPERTY(EditAnywhere)
    float StepHeight;
    
    UPROPERTY(EditAnywhere)
    float StepTime;
    
    UPROPERTY(EditAnywhere)
    float StepDist;
    
    UPROPERTY(EditAnywhere)
    float SwingStiffness;
    
    UPROPERTY(EditAnywhere)
    float SwingStiffnessFinal;
    
    UPROPERTY(EditAnywhere)
    float PlantStiffness;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendTimeHeight;
    
    UPROPERTY(EditAnywhere)
    float BlendInTimeFinalMult;
    
    UPROPERTY(EditAnywhere)
    float BlendInTimeAnkle;
    
    UPROPERTY(EditAnywhere)
    float NeutralStanceDistanceMult;
    
    UPROPERTY(EditAnywhere)
    float PostImpulseStepSpeedMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncreaseStanceBlendTimeDueToBodyAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAllowedFootTiltAngle;
    
    UPROPERTY(EditAnywhere)
    float WaitBeforeSteppingAfterImpulse;
    
    UPROPERTY(EditAnywhere)
    float CircleSizeOtherFoot;
    
    UPROPERTY(EditAnywhere)
    float PlantedFootUnintentionallyLiftedMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReducePlantedStiffnessAsTimePassesForceFall;
    
    UPROPERTY(EditAnywhere)
    float ReducePlantedStiffnessAsTimePassesForceFallBlendTime;
    
    UPROPERTY(EditAnywhere)
    float ReducePlantedStiffnessAsTimePassesForceFallFinalMult;
    
    UPROPERTY(EditAnywhere)
    float IncreaseBlendTimeAsTimePassesForceFallBottomRange;
    
    UPROPERTY(EditAnywhere)
    float IncreaseBlendTimeAsTimePassesForceFallTopRange;
    
    UPROPERTY(EditAnywhere)
    float IncreaseBlendTimeAsTimePassesForceFallTopVal;
    
    UPROPERTY(EditAnywhere)
    float COMControlStiffnessBalanced;
    
    UPROPERTY(EditAnywhere)
    float COMControlCurrentPoseStrength;
    
    UPROPERTY(EditAnywhere)
    float COMControlLinMagCap;
    
    UPROPERTY(EditAnywhere)
    float RangeLimWindmillSingle;
    
    UPROPERTY(EditAnywhere)
    float RangeLimWindmillBoth;
    
    UPROPERTY(EditAnywhere)
    float ClampWindmillMin;
    
    UPROPERTY(EditAnywhere)
    float ClampWindmillMax;
    
    UPROPERTY(EditAnywhere)
    float WeightWindmill;
    
    UPROPERTY(EditAnywhere)
    float UseStiffnessWindmill;
    
    UPROPERTY(EditAnywhere)
    float MultWindmill;
    
    UPROPERTY(EditAnywhere)
    float DistWindmill;
    
    UPROPERTY(EditAnywhere)
    float RadWindmill;
    
    UPROPERTY(EditAnywhere)
    float ForwardOffsetWindmill;
    
    UPROPERTY(EditAnywhere)
    float UpOffsetWindmill;
    
    UPROPERTY(EditAnywhere)
    float WindmillMaxLengthRatio;
    
    UPROPERTY(EditAnywhere)
    float ReachForWoundLocalHitPointDistBuffer;
    
    UPROPERTY(EditAnywhere)
    float ReachForWoundExpandShoulderLimitRatioAfterConstraintMade;
    
    UPROPERTY(EditAnywhere)
    float ReachForWoundExpandWristLimitRatioAfterConstraintMade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReflectSpineBackWoundsToTheClosestSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReachForWoundGrabFrontOfClosestLeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceHeadHitsToReachWithBothHands;
    
    UPROPERTY(EditAnywhere)
    float ChanceOfDoubleReach;
    
    UPROPERTY(EditAnywhere)
    float ReachForWoundUseCOMVelFac;
    
    UPROPERTY(EditAnywhere)
    float ReachForWoundExtraSideOffset;
    
    UPROPERTY(EditAnywhere)
    float BraceLenth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DontStopBraceUnlessLowVelocity;
    
    UPROPERTY(EditAnywhere)
    float BraceOpenWristLimitsRatio;
    
    UPROPERTY(EditAnywhere)
    float BraceFacingDotLim;
    
    UPROPERTY(EditAnywhere)
    float BraceFacingDotLimBracing;
    
    UPROPERTY(EditAnywhere)
    float BraceSideDotLim;
    
    UPROPERTY(EditAnywhere)
    float BraceSideDotLimBracing;
    
    UPROPERTY(EditAnywhere)
    float BraceBehinfBackDotLim;
    
    UPROPERTY(EditAnywhere)
    float BraceInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoSavageAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavageAttackUsePitchClamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavageAttackOffsetsUseSpineDirs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SavageAttackDebugTarget;
    
    UPROPERTY(EditAnywhere)
    float SavageWindupTime;
    
    UPROPERTY(EditAnywhere)
    float SavageSpringTime;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackPostWaitTime;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackOtherArmPhaseGoTime;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackDistance;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackConeAngle;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackConeAngleDownAttacks;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackPivotForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackPivotSideOffset;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackPivotUpOffsetMin;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackPivotUpOffsetMax;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackForwardPullbackOffset;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackSidePullbackOffset;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackUpPullbackOffset;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackOverrideArcAngle;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackSpineStiffness;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackSpineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SavageAttackSpineFlattenAxis;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackUpPullbackSpeed;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackUpPullbackStiffness;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackUpPullbackWeight;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackUpPullbackBlendRate;
    
    UPROPERTY(EditAnywhere)
    float SavageSpineMaxOffsetAngle;
    
    UPROPERTY(EditAnywhere)
    float SavageSpinePriority;
    
    UPROPERTY(EditAnywhere)
    float SavageMiddleRangeFollowThoughMult;
    
    UPROPERTY(EditAnywhere)
    float SavageAttackWindupBaseWeight;
    
    UPROPERTY(EditAnywhere)
    float PriorityCurrentPose;
    
    UPROPERTY(EditAnywhere)
    float UseStiffnessCurrentPose;
    
    UPROPERTY(EditAnywhere)
    float PriorityTrackingPose;
    
    UPROPERTY(EditAnywhere)
    float UseStiffnessTrackingPose;
    
    UPROPERTY(EditAnywhere)
    float DefaultArmsJointSpeed;
    
    UPROPERTY(EditAnywhere)
    float InitialHeadWeaknessTime;
    
    UPROPERTY(EditAnywhere)
    float InitialSpineWeaknessTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eBodyParts> SpineBalanceEndPartOverride;
    
    UPROPERTY(EditAnywhere)
    float HunchStaggerTopRange;
    
    UPROPERTY(EditAnywhere)
    float HunchStaggerBottomRange;
    
    UPROPERTY(EditAnywhere)
    float HunchStaggerTopVal;
    
    UPROPERTY(EditAnywhere)
    float HunchStaggerBottomVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HunchFromCurrentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSpineUpright;
    
    UPROPERTY(EditAnywhere)
    float Headlookdist;
    
    UPROPERTY(EditAnywhere)
    float HeadlookDistUnbalanced;
    
    UPROPERTY(EditAnywhere)
    float Headlookrange;
    
    UPROPERTY(EditAnywhere)
    float UseStiffnessHeadLook;
    
    UPROPERTY(EditAnywhere)
    float WeightHeadLook;
    
    UPROPERTY(EditAnywhere)
    float ClampHeadLook;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<eBodyParts> HeadLookBasePartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowLookingAtWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowLookingAtBracePoint;
    
    UPROPERTY(EditAnywhere)
    float SpeedAlpha;
    
    UPROPERTY(EditAnywhere)
    float FallenOverAngleFromUpright;
    
    UPROPERTY(EditAnywhere)
    float FallenOverAngleFromUprightInitialBoost;
    
    UPROPERTY(EditAnywhere)
    float FallenOverAngleFromUprightInitialBoostTime;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesChance;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeUntilAttempt;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesSwitchToDropTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallToKneesUseStabilizationRegardless;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesErrorToStopStepping;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesAbortBodyAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulse FallToKneesStabilizationHandling;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeUntilDropMin;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeUntilDropMax;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeUntilFallMin;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeUntilFallMax;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeBalanceRequired;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesPushCOMDistance;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesPushAngle;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesPushMagFall;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesPushTime;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesFinalStrengthRatioArms;
    
    UPROPERTY(EditAnywhere)
    float FallToKneesTimeToHunchBlendout;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<eBodyParts>> FallToKneesPushIncludeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallToKneesStopStaggerStayUprightIfNotAttemptingKnees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoRobotPowerDown;
    
    UPROPERTY(EditAnywhere)
    float ArmsPowerDownStartTime;
    
    UPROPERTY(EditAnywhere)
    float ArmsPowerDownDuration;
    
    UPROPERTY(EditAnywhere)
    float ArmsPowerDownMinStrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float UpperBodyPowerDownStartTime;
    
    UPROPERTY(EditAnywhere)
    float UpperBodyPowerDownDuration;
    
    UPROPERTY(EditAnywhere)
    float UpperBodyPowerDownMinStrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LowerBodyPowerDownStartTime;
    
    UPROPERTY(EditAnywhere)
    float LowerBodyPowerDownDuration;
    
    UPROPERTY(EditAnywhere)
    float LowerBodyPowerDownMinStrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AdjustGoalMaxPhase;
    
    UPROPERTY(EditAnywhere)
    float StiffnessBodyAngleRange;
    
    UPROPERTY(EditAnywhere)
    float ReducedStiffnessMult;
    
    UPROPERTY(EditAnywhere)
    float COMShiftLim;
    
    UPROPERTY(EditAnywhere)
    float RateCOMWeight;
    
    UPROPERTY(EditAnywhere)
    float LinUPdampingBalanced;
    
    UPROPERTY(EditAnywhere)
    float ChangeRate;
    
    UBodyDriver_BipedBalanceTuningSet();
};

