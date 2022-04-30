#pragma once
#include "CoreMinimal.h"
#include "EEndAiEscapeState.h"
#include "EBattleMoveType.h"
#include "EWeaponSlot.h"
#include "EndAIController.h"
#include "EndAerialBoidsParam.h"
#include "EEndBattleWeakConditionType.h"
#include "EEndPartsRepairConditionType.h"
#include "UObject/NoExportTypes.h"
#include "EBattleAroundDirection.h"
#include "EEndBattleAttackDirectionType.h"
#include "EndBoidsParam.h"
#include "EEndAiMathCmp.h"
#include "EEndBattleAbilityReactionConditionType.h"
#include "EEndAiAbilitySuspendFactor.h"
#include "EBattleAIInfoFlag.h"
#include "EndBattleAIQuantityParam.h"
#include "EAroundPointType.h"
#include "EEndAiBattleRole.h"
#include "EndBattleAIRoleSetting.h"
#include "ETriggerBoxCondition.h"
#include "UObject/NoExportTypes.h"
#include "EEndBattleAbilityTargetCloseMoveType.h"
#include "EEndAiBattleSecondRole.h"
#include "EPlayerType.h"
#include "EEndBattleStatusChangeType.h"
#include "EBattleAISetTargetType.h"
#include "EEndBattleSpecialStatusChangeType.h"
#include "EEndLocomotionAnim.h"
#include "UObject/NoExportTypes.h"
#include "EEndAnimWalkType.h"
#include "EEndAiMoveMode.h"
#include "EEndDoOnceCode.h"
#include "EEndWeakConditionEnable.h"
#include "EBattleEntryType.h"
#include "EEndWeakConditionEnableOption.h"
#include "EEndBattleAttributeType.h"
#include "EBattleOrderRule.h"
#include "EBattleSensorShapeType.h"
#include "EEndBattleCountLogType.h"
#include "EBattleAIInfoParam.h"
#include "EEndBattleSyncActionType.h"
#include "EBattleAirMoveType.h"
#include "EndBattleHelicopterSpec.h"
#include "ETriggerWeakRemakeType.h"
#include "EEndExtraActionLayer.h"
#include "EndDataTableBattleAbility.h"
#include "EEndBattleAbilityCommandType.h"
#include "EndDataTableBattleDamageSource.h"
#include "EEndAiAbilitySuspendTiming.h"
#include "EEndBattleReactionInfluenceType.h"
#include "EEndBattleTargetCharaBaseLockType.h"
#include "EEndAIBranchBit.h"
#include "EEndAiMathBinCmp.h"
#include "EEndAiBattleTargetType.h"
#include "EBattleInSituationType.h"
#include "EBattleAIProgress.h"
#include "Engine/LatentActionManager.h"
#include "EEndDoOnceOutCode.h"
#include "EEndBattleEasySpawnEnableRagdollType.h"
#include "EndCharacterAttachEffectArguments.h"
#include "EModifierVolumeType.h"
#include "EndBattleAIController.generated.h"

class USplineComponent;
class AActor;
class AEndCharacter;
class AEndNavModifierVolume;
class UAnimSequence;
class UEndBattleDamageSourceComponent;
class AEndBattleSceneBlueprint;
class UObject;

UCLASS(Blueprintable)
class ENDGAME_API AEndBattleAIController : public AEndAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RelatedBattleCharaSpec;
    
    UPROPERTY(EditAnywhere)
    float PositionAngleQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAroundWalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAroundStrafeMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleAroundDirection::Type> AroundDirection;
    
    UPROPERTY(EditAnywhere)
    float AroundAddDistance;
    
    UPROPERTY(EditAnywhere)
    float RunAroundThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWandering;
    
    UPROPERTY(EditAnywhere)
    float WanderingRange;
    
    UPROPERTY(EditAnywhere)
    float WanderingInterval;
    
    UPROPERTY(EditAnywhere)
    float WanderingIntervalRand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWanderingStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptMoveAbility;
    
    UPROPERTY(EditAnywhere)
    float SearchMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SearchMovePathCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEscapeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEscapeTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalEnemyShrink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUcpcDifHeightAuto;
    
    UPROPERTY(EditAnywhere)
    float UcpcDifHeightAutoRange;
    
    UPROPERTY(EditAnywhere)
    float ActorChaseEndDistance;
    
    UPROPERTY(EditAnywhere)
    float ActorChaseEndDifHeight;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> ActorChaseTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorChaseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTurnIgnoreMove;
    
    UPROPERTY(EditAnywhere)
    float SearchDistance;
    
    UPROPERTY(EditAnywhere)
    float DistanceFar;
    
    UPROPERTY(EditAnywhere)
    float DistanceConfront;
    
    UPROPERTY(EditAnywhere)
    float DistanceNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistanceSearchUseConfront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialDistanceSearchTarget;
    
    UPROPERTY(EditAnywhere)
    float CharaDistance;
    
    UPROPERTY(EditAnywhere)
    float CharaDistanceQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRequestActionAtSync;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AEndCharacter> ActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePositionAngle;
    
    UPROPERTY(EditAnywhere)
    float ForcePositionAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WhiteListGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlackListGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefenceAreaGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirPointGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChaseGroup;
    
    UPROPERTY(EditAnywhere)
    float FearThreshold;
    
    UPROPERTY(EditAnywhere)
    float DamageSourceEntryThreshold;
    
    UPROPERTY(EditAnywhere)
    float CanReachRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRescueSizeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptActionOutArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseResetPathAtAbility;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleAroundDirection::Type> AerialAroundDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialAroundStrafe;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> AerialFunnelTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AerialFunnelOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialFunnelParentRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialFunnelParentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialFunnelFixFlag;
    
    UPROPERTY(EditAnywhere)
    float AerialFunnelFixTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAeriaDecoyMode;
    
    UPROPERTY(EditAnywhere)
    float AerialGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialUsePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AerialSplineActor;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineRotateMargin;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineAccSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineRotateRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineRun;
    
    UPROPERTY(EditAnywhere)
    float bAerialSplineThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineApproachFront;
    
    UPROPERTY(EditAnywhere)
    float bAerialSplineApproachDistanceQuantity;
    
    UPROPERTY(EditAnywhere)
    float bAerialSplineApproachQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineUnloopAutoStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineMotionForwardOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineStartStopRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineOverrideYaw;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineOverrideYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineOverridePitch;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineOverridePitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialSplineTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineAutoAdjust;
    
    UPROPERTY(EditAnywhere)
    float AerialRotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float AerialHoveringRange;
    
    UPROPERTY(EditAnywhere)
    float AerialHoveringInterval;
    
    UPROPERTY(EditAnywhere)
    float AerialHoveringIntervalRand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialHelicopter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialLandingAnywhere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialLandingAnywhereAndTargetEqs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialSplineSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float AerialSplineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AerialSplineLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroundSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanUseFastCalcMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugRequestActionLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBoids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBoidsAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UseBoidsAvoidSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBoidsParam Boids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAerialBoidsParam AerialBoids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam MoveRangeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam TargetDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam LatestDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam BoidsFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam PersonalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam CanBlockSeeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam RepalsiveFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam BlackListFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam AerialBoidsFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIQuantityParam AerialRepalsiveFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleSetting RoleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeDamageDelayMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrepareProcOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstUpdateOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptInterceptAtStopStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* LatestLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* TransformSpline;
    
    UPROPERTY(EditAnywhere)
    float secondsIntervalATBAttack_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NextWarpPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> WarpPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerBoxCondition TriggerBoxCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerBoxInSideName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> workBool_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> workInt32_;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> workFloat_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> workVector_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRotator> workRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> workName_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName drawThinkPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDodgeAngleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSensorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBattleAreaDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowPushCollisionController;
    
    AEndBattleAIController();
    UFUNCTION(BlueprintCallable)
    void UnregisterOverlapTriggerBox();
    
    UFUNCTION(BlueprintCallable)
    bool TryPossibleEasySpawnCharacter(FName keyword);
    
    UFUNCTION(BlueprintCallable)
    void TransformCharacter(FName BattleCharaSpecID);
    
    UFUNCTION(BlueprintCallable)
    bool ToSpawnEasySpawnCharacter(FName keyword, FVector hidePosition, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    int32 ToRestoreParts(FName keyword);
    
    UFUNCTION(BlueprintCallable)
    void ToRepairWithHPPercent(FName charaPartsSpecName, FName meshLabelName, float HPPercent);
    
    UFUNCTION(BlueprintCallable)
    int32 ToRepair(FName charaPartsSpecName, FName meshLabelName, EEndPartsRepairConditionType Condition);
    
    UFUNCTION(BlueprintCallable)
    bool ToMoveToSocketEasySpawnCharacter(FName keyword, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void ToLanding();
    
    UFUNCTION(BlueprintCallable)
    bool ToKillEasySpawnCharacter(FName keyword, bool forceDestroy);
    
    UFUNCTION(BlueprintCallable)
    int32 ToDestructionParts(FName keyword);
    
    UFUNCTION(BlueprintCallable)
    bool ToChangeParts(FName meshName, FName meshLabel);
    
    UFUNCTION(BlueprintCallable)
    void ToBreak(FName charaPartsSpecName, bool bEnableBreakMessage);
    
    UFUNCTION(BlueprintCallable)
    void ToAerial();
    
    UFUNCTION(BlueprintCallable)
    void SwitchingTriggerBoxCondition();
    
    UFUNCTION(BlueprintCallable)
    void SwitchAroundMove();
    
    UFUNCTION(BlueprintCallable)
    void SuspendDamage();
    
    UFUNCTION(BlueprintCallable)
    void SuspendAll();
    
    UFUNCTION(BlueprintCallable)
    void SuspendAction(bool Ability, bool Motion);
    
    UFUNCTION(BlueprintCallable)
    void StopPartLoopMotion();
    
    UFUNCTION(BlueprintCallable)
    void StopAddMotion();
    
    UFUNCTION(BlueprintCallable)
    void StartDisableLatestContactWall();
    
    UFUNCTION(BlueprintCallable)
    bool StartBurst(bool Force);
    
    UFUNCTION(BlueprintCallable)
    FVector SetWorkVector(FName Name, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    FRotator SetWorkRotator(FName Name, FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    FName SetWorkName(FName Name, FName Value);
    
    UFUNCTION(BlueprintCallable)
    int32 SetWorkInt32(FName Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    float SetWorkFloat(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetWorkBool(FName Name, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeakConditionDamageOnlyMode(bool enableDamageOnlyMode, bool enableDamageOverEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityWeapon(bool bVisible, EWeaponSlot weaponSlotType);
    
    UFUNCTION(BlueprintPure)
    FName SetupWaterJump(float InRangeMin, float InRangeMax);
    
    UFUNCTION(BlueprintCallable)
    void SetupWarpInformation(TArray<FName> warpPointNames);
    
    UFUNCTION(BlueprintPure)
    bool SetupWallJumpDetailed(float MinQt, float MaxQt, float KickDistQt, bool InCeil);
    
    UFUNCTION(BlueprintPure)
    bool SetupWallJump(float MinQt, float MaxQt, float KickDistQt, bool InCeil);
    
    UFUNCTION(BlueprintCallable)
    void SetupDroppingAbility(float Speed, float Acc, float Rotate, float RotateUp, float RotateDown);
    
    UFUNCTION(BlueprintPure)
    bool SetupCeilJump(float MinQt, float MaxQt, float KickDistQt, float InLimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetUncheckEnvStaticMeshContactWall(bool uncheck);
    
    UFUNCTION(BlueprintCallable)
    void SetTurn(TEnumAsByte<EBattleMoveType::Type> InType, bool InTurn);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerBoxCondition(const ETriggerBoxCondition Condition);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTurn(bool InTurn);
    
    UFUNCTION(BlueprintCallable)
    bool SetTargetPlayer(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetByType(EBattleAISetTargetType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetAbility(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetSubStep(int32 InSubStep);
    
    UFUNCTION(BlueprintCallable)
    void SetStep(int32 InStep, bool InClearSubStep);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePointFloat(float InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialStatusStateChangeID(EEndBattleSpecialStatusChangeType Type, FName StateChangeID, FName paramID);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondRoleTerm(TEnumAsByte<EEndAiBattleSecondRole::Type> InTerm);
    
    UFUNCTION(BlueprintCallable)
    void SetRole(TEnumAsByte<EEndAiBattleRole::Type> InRole);
    
    UFUNCTION(BlueprintCallable)
    void SetPushCollisionEnable(FName partId, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetPreAsyncTick(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseUpdateDamageSource(bool Pause);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideUpperAnim(const FName InName, const FName InInterIn, const FName InInterOut);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideParamTargetCorrectionNotify(FName motionName, FName abilityName, bool bOverrideDirectionAngle, float OverrideDirectionAngle, bool bOverrideDistance, float OverrideDistance, bool bOverrideNotDistanceMoveStop, EEndBattleAbilityTargetCloseMoveType OverrideNotDistanceMoveStopType);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideLocomotionAnim(FName InID);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideKeepFromAbility(FName InAbilityName);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideKeep(int32 InKeep);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideConfrontCharacter(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideBattleCharaSpec(FName BattleCharaSpecID);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideBattleCharaPartsSpec(FName BaseID, FName OverrideId, bool bChangeHP);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAroundPointReserveUpdate(bool InOverride, EAroundPointType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAroundPoint(bool InOverride, FVector InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAnim(EEndLocomotionAnim InType, const FName InName, const FName InInter, const EEndAnimWalkType InAfterType);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAerialAroundPoint(bool InOverride, FVector InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideActiveAimAngle(FVector2D ActiveYawRange, FVector2D ActivePitchRange);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAbilityRange(float InPrepareMin, float InPrepareMax, float InMin, float InMax);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAbilityKeep(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherMoveAnim(FName InStart, FName InLoop, FName InEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetNextWarpPosition(const FVector& warpPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetNextAbilityTarget(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveModeParam(TEnumAsByte<EBattleMoveType::Type> InType, bool InStrafe, float InRunDistance, float InArrivalRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(bool bMovable, bool bHitWall, bool bHitObject, bool bFitFloor, bool bMaxWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshDisp(bool InDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnore(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetHPPercent(int32 Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetHPMinLimitPercent(int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetHPMinLimitPassiveDamagePercent(int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetHPMinLimitAIPCAttackPercent(int32 InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetHPMinLimit(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHateUpdateFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetForceMoveType(TEnumAsByte<EEndAiMoveMode::Type> InType);
    
    UFUNCTION(BlueprintCallable)
    void SetForceEnableTargetSpecialStatusChange(EEndBattleSpecialStatusChangeType Type, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDefaultSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetForceDefaultCollisionSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetFly(float InHeight, float InUpSpeed, float InDownSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeTraceFlag(bool InTarget, bool InParty, bool InEnemy);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWeakCondition(EEndWeakConditionEnable Condition, EEndWeakConditionEnableOption Option);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePauseUpdateDamageSource(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledUpdateAimLocation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableContactWallReturnAngle(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCompletedAbilityExtraActionEvent(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableTargetPoint(FName SocketName, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSuspendAction(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableRemainAttributeEffect(EEndBattleAttributeType attribute);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableReaction(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableParts(FName partsID, bool bDisableTarget, bool bDisableDamage, bool bDisableDamageCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBurst(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBPDamage(bool disable);
    
    UFUNCTION(BlueprintCallable)
    void SetCountDownTimer(FName InName, float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetConfront(float InNear, float InConfront, float InFar);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandLinkageTimeScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetCapturableBySummon(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBurstForceAerial(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBPPercent(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBPDamageCoefficient(float coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetBPAttackChance(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBP(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyDummyParts(FName PartsSpecID);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSensorShapeType(EBattleSensorShapeType InSensorShapeType, float InAngleRange, float InRadiusMin, float InRadiusMax, FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSafeTransform(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleAIParam(TEnumAsByte<EBattleAIInfoParam::Type> InType, float InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleAIFlag(TEnumAsByte<EBattleAIInfoFlag::Type> InType, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleAbilityRotateStatePointName(FName modifierVolumeName);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleAbilityRotateStateLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleRangeTargetPoint(FName SocketName, float baseAngle, float angleRange);
    
    UFUNCTION(BlueprintCallable)
    void SetAISpec(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialMoveType(TEnumAsByte<EBattleAirMoveType::Type> InType);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialBoidsLeader(AEndCharacter* InLeader);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTime(FName InName, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SelfDisappear(bool drawPause);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkVector(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkRotator(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkInt32(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkFloat(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWorkBool(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ResetWhiteListArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetPathArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideUpperAnim(bool InPlayEndAnim);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideKeep();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideBattleCharaSpec();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideBattleCharaPartsSpec(FName BaseID);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideAnim(EEndLocomotionAnim InType, const FName InInter);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideActiveAimAngle();
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetLatestContactWall();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreNavArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetDefenseArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetChaseArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetBP();
    
    UFUNCTION(BlueprintCallable)
    void ResetBlackListArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetATB();
    
    UFUNCTION(BlueprintCallable)
    void ResetAngleRangeTargetPoint(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllWork();
    
    UFUNCTION(BlueprintCallable)
    void ResetAirPointArea();
    
    UFUNCTION(BlueprintCallable)
    void ResetAerial();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionRequestCount(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetActionLocalCount(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ResetActionAbilityLocalCountFromID(FName InAbilityID);
    
    UFUNCTION(BlueprintCallable)
    bool ReserveAbility(FName InName, bool InImmediate);
    
    UFUNCTION(BlueprintCallable)
    void RequestWandering(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void RequestShowAbilityName(FName InName, float InTime, bool bNonGuardableIcon);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReserveAction2Arg(FName InName, int32 iValue, int32 iValue2, float fValue, float fValue2, const FString& sValue, const FString& sValue2);
    
    UFUNCTION(BlueprintCallable)
    bool RequestReserveAction(FName InName, int32 iValue, float fValue, const FString& sValue);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPathFindLocation(FVector InLocation, FVector InLookAt, float InRadius, float SmoothingDistance);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPathFind(bool IgnoreCanMove);
    
    UFUNCTION(BlueprintCallable)
    void RequestOtherMove();
    
    UFUNCTION(BlueprintCallable)
    void RequestOtherLaunch();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextSpline(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RequestHeliOverridePoint(AEndNavModifierVolume* InNav, FEndBattleHelicopterSpec InSpec);
    
    UFUNCTION(BlueprintCallable)
    void RequestHeliMove(FEndBattleHelicopterSpec InSpec, int32 InGoal, bool InSkip);
    
    UFUNCTION(BlueprintCallable)
    void RequestGuard(float InTime, bool InMovable);
    
    UFUNCTION(BlueprintCallable)
    void RequestGroundSpline(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RequestGroundCrash(bool InBurst);
    
    UFUNCTION(BlueprintCallable)
    void RequestEscapeWait();
    
    UFUNCTION(BlueprintCallable)
    void RequestDodge(FVector Location, bool InEnemy);
    
    UFUNCTION(BlueprintCallable)
    void RequestBurstLaunch();
    
    UFUNCTION(BlueprintCallable)
    bool RequestBindAction(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RequestAttachSyncAction();
    
    UFUNCTION(BlueprintCallable)
    void RequestAerialCrash(bool InBurst);
    
    UFUNCTION(BlueprintCallable)
    void RequestActorChase(AActor* InActor, FVector InOffset);
    
    UFUNCTION(BlueprintCallable)
    bool RequestActionSubStep(FName InName, int32 InSubStep);
    
    UFUNCTION(BlueprintCallable)
    bool RequestActionStep(FName InName, int32 InStep);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAction(FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveStatusChange(EEndBattleStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpecialStatusByID(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpecialStatus(EEndBattleSpecialStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpecialStateEffect(FName specialStateEffectID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreNavArea(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachEffect(const FName AttachSocketName, const FName ResourceName, bool bDestroy);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeakCondiiton();
    
    UFUNCTION(BlueprintCallable)
    void RemakeWeakCondition(ETriggerWeakRemakeType remakeType, bool resetProtectionTime);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTurn(FName InName, float InYaw, float InMargin, bool InTarget, float InTimeout);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOverlapTriggerBox();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterOrder(FName InName, FName InOrder, int32 InCount, FName InRace, TEnumAsByte<EBattleOrderRule::Type> InRule, float InInterest);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterMove(FName InName, FVector InLocation, FVector InLookAt, float InRadius, float InTimeout, bool InPathFind, float InWalkRadius, bool InWaitIdle, float SmoothingDistance, bool InImmediate, float InInterval);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterMotion(FName InName, float InTime, int32 InOverrideKeep);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterConfront(FName InName, float InMin, float InMax);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCombo(FName InName, float InTime, int32 InATB, int32 InRandomATB, FName InAction1, FName InAction2, FName InAction3, FName InAction4, FName InAction5, FName InAction6, FName InAction7, FName InAction8, bool InLock, bool InTimeout);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCharaRangeListener(AEndCharacter* InChara, float InRange);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAbilityListener(FName InAbility);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAbility(FName InName, FName InID, float InTime, float InTimeout, int32 InATB, int32 InRandomATB, float InMinRange, float InMaxRange, float InActionMin, float InActionMax, float InHeightMin, float InHeightMax, float InViewRange, bool ViewReverse, float InDelayMove, float InDelayAbility, float InDelayRandAbility, bool InNeedMove, bool InNeedBetterMove, bool InAerialNeedMove, bool InCancelLostTarget, FName InOverrideLeftAbility, FName InOverrideRightAbility, bool InNeedSee);
    
    UFUNCTION(BlueprintCallable)
    void PlayPartMotion(FName motionName, FName InBone, EEndExtraActionLayer Layer, float overrideBlendIn, float overrideBlendOut);
    
    UFUNCTION(BlueprintCallable)
    void PlayPartLoopMotion(FName motionName, FName InBone, EEndExtraActionLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void PlayMotion(FName motionName);
    
    UFUNCTION(BlueprintCallable)
    void PlayFsmAddMotion(FName motionBegin, FName motionLoop, FName motionEnd);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayBattleCameraSequence(FName SequenceID);
    
    UFUNCTION(BlueprintCallable)
    void PlayAddMotion(FName motionName, EEndExtraActionLayer Layer, bool bInfiniteLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideDamageHitReactionID(FName AbilityID, const FEndDataTableBattleAbility& dataTableBattleAbility, FName DamageSourceID, bool abilityFirstHit, FName& damageHitReactionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate(EEndAiBattleRole::Type InRole, int32 InStep, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeDamageOnce(AEndCharacter* InCauserChara, FName InAbilityID, bool InAttributeWeak, EEndBattleAbilityCommandType AbilityCommandType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeDamage(int32 Damage, AEndCharacter* InChara, FName InName, EEndBattleAbilityCommandType InCommandType, bool InBind, bool InGuard, bool InDodge, FName InBoneName, bool InAttributeWeak, FName InDmgSrcID, EEndBattleAttributeType InDmgSrcAttribute, float justHitRotYaw, FVector hitPosition, bool InHeal, bool InCounter, const FEndDataTableBattleDamageSource& dataTableBattleDamageSource, bool useAbilityUCPC);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeAbilitySequenceInvoke(AEndCharacter* causerChara, const FName& abilityName, const FName& AnimName, const UAnimSequence* AnimSequence, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeAbilityInvoke(AEndCharacter* causerChara, const FName& abilityName, EEndBattleAbilityCommandType AbilityCommandType, const TArray<FName>& AnimationNameList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSyncActionChange(const FName& syncActionID, const FName& ChangeID, const FName& DetachDamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuspendRegisterTurn(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuspendAbility(FName InName, EEndAiAbilitySuspendFactor InFactor, EEndAiAbilitySuspendTiming InTiming);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonStartChanting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonEndOfChanting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonCutSceneRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonCutSceneEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummonCutSceneDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStolen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartSetPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSplineModeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSplineModeBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpecialStatusChange(const FName& SpecialStatusChangeID, EEndBattleSpecialStatusChangeType Type, const FName& ChangeID, const TArray<float>& Params, const TArray<FName>& ParamIDs, const TArray<AActor*>& ParamActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialStateEffectEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowedWaveBattleScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRunningRegisterMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveStatusChange(EEndBattleStatusChangeType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReactionSensingAbilitySequenceInvoke(AEndCharacter* causerChara, EEndBattleReactionInfluenceType ReactionInfluenceType, EEndBattleAttackDirectionType AttackDirectionType, EEndBattleAbilityCommandType CommandType, const UAnimSequence* AnimSequence, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReactionSensingAbilityInvoke(AEndCharacter* causerChara, EEndBattleReactionInfluenceType ReactionInfluenceType, EEndBattleAttackDirectionType AttackDirectionType, EEndBattleAbilityCommandType CommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReactionSensing(AEndCharacter* causerChara, EEndBattleReactionInfluenceType ReactionInfluenceType, EEndBattleAttackDirectionType AttackDirectionType, EEndBattleAbilityCommandType CommandType, EEndBattleAttributeType DmgSrcAttributeType, int32 CutValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreTakeDamage(float justHitRotYaw, AEndCharacter* OwnerCharacter, FName InName, FName hitBoneName, FName DamageSourceID, const FVector& hitPosition, int32 Damage, bool InGuard);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPressedDodgeButtonFromSyncAction(float totalPower, float MaxPower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreparingAbility(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareProc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareAbility(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreCalcDamage(AEndCharacter* causerCharacter, FName abilityName, FName DamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBurstBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPinchCondition(EPlayerType playerTyoe);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPassiveUpdate(EEndAiBattleRole::Type InRole, int32 InStep, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartsBreak(FName partsID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverlapTriggerBox(FName ObjectName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutAreaSensorEvent(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOrder(AEndCharacter* InChara, FName InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyEnemyAbility(AEndCharacter* InEnemy, FName InName, bool InNormal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMotionStateMessageUpdate(FName InMotionName, FName InName, int32 InIntValue, float InFloatValue, float InProgress, bool LatestContactWall, bool LatestContact);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMotionStateMessageEnd(FName InMotionName, FName InName, int32 InIntValue, float InFloatValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMotionStateMessageBegin(FName InMotionName, FName InName, int32 InIntValue, float InFloatValue, float InTotalDuration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMotionMessage(FName InMotionName, FName InName, int32 InIntValue, float InFloatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMetaMessageAboutCharacter(AEndCharacter* InChara, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMetaMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMetaEventTakeDamage(int32 Damage, AEndCharacter* InSender, AEndCharacter* InReceiver, FName InName, bool InBind, bool InGuard, bool InDodge, FName InBoneName, bool InAttributeWeak, bool InHeal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMetaEventNotifyEnemyAbility(AEndCharacter* InSender, AEndCharacter* InReceiver, FName InName, bool InNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKilled(int32 Damage, AEndCharacter* InTarget, FName InName, bool InBind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemStolen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnIsHitDamage(AEndCharacter* causerChara, FName AbilityID, int32 abilityUniqueID, FName DamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInterceptAbility(FName InName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeProc();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncrementBattleCountPerID(FName TargetCharaName, EEndBattleCountLogType Type, FName ID, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInAreaSensorEvent(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGiveDamage(int32 Damage, AEndCharacter* InTarget, FName InName, bool InBind, bool InGuard, bool InJustGuard, bool KeepOver, bool InDodge, bool InCounter, FName InBoneName, bool InAttributeWeak, FName InDamageSourceID, bool InSteal, bool heal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnGetTargetFieldPosition(FVector& outPosition, FName InBattleAbilityID, FName InDamageSourceID, FName InAnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnGetCreateFieldPosition(FVector& outPosition, FName InBattleAbilityID, FName InDamageSourceID, FName InAnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFirstUpdate(EEndAiBattleRole::Type InRole, int32 InStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFear(AEndCharacter* InChara, FName InAbilityName, FVector InLocation, UEndBattleDamageSourceComponent* InDamageSourceComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventRemoveWeakCondition(EEndBattleWeakConditionType ConditionType);
    
    UFUNCTION(BlueprintCallable)
    void OnEventDamageSource(FName DamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventDamageOverWeakCondition(EEndBattleWeakConditionType ConditionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventCompletedWeakCondition(EEndBattleWeakConditionType ConditionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventAddWeakCondition(EEndBattleWeakConditionType ConditionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscapeSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscapeCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscapeBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryCharaRange(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryBattleScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSetPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOtherMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCutScene(const FName& CutsceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyDamageSource(const FName& DamageSourceID, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDead(bool AtBurst);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageSourceEntry(AEndCharacter* InChara, FName InAbilityName, FVector InLocation, UEndBattleDamageSourceComponent* InDamageSourceComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutSceneMessage(const FName& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateDamageSource(AEndCharacter* InOwner, const FName& DamageSourceID, UEndBattleDamageSourceComponent* InDamageSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConvocation(AEndCharacter* InLeader, FName InFormationName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnContactWall(float Angle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnContactObject(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteRegisterMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedAbilityExtraActionEvent(EPlayerType PlayerType, FName AbilityFName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteAbility(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearAction(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckBindAction(FName ActionName, int32 CheckID, int32 ComboIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStep(int32 InStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeRole(EEndAiBattleRole::Type InRole);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePhase(int32 InNew, int32 InOld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMoveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMotionState(int32 Before, int32 After);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLeader(AEndCharacter* InLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAggressive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstEnd(bool instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurstBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBPAttackChanceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBPAttackChanceFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginOtherMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCutScene(const FName& CutsceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginAbility(AEndCharacter* InChara, FName InAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnATBLightAttackEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnATBHardAttackEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrivalRegisterMove(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAerialSplineEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAerialSplineBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddStatusChange(EEndBattleStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityReactionConditionTargetDodgeDirection(const FName& AbilityID, AEndCharacter* targetChara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityReactionConditionTargetDodgeAngle(const FName& AbilityID, AEndCharacter* targetChara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityReactionConditionTargetDodge(const FName& AbilityID, AEndCharacter* targetChara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityReactionCondition(EEndBattleAbilityReactionConditionType abilityReactionConditionType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAbilityReaction(float Param0);
    
    UFUNCTION(BlueprintCallable)
    void NotBoolBranch(FName Name, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NextSubStep();
    
    UFUNCTION(BlueprintCallable)
    void LockTargetCharaBase(EEndBattleTargetCharaBaseLockType Type, bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void IsWorkInt32Branch(FName Name, int32 Value, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkInt32(FName Name, int32 Value, EEndAiMathCmp cmp);
    
    UFUNCTION(BlueprintCallable)
    void IsWorkFloatBranch(FName Name, float Value, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintPure)
    bool IsWorkFloat(FName Name, float Value, EEndAiMathCmp cmp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWithinTargetEQS(FVector inP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeakCondition();
    
    UFUNCTION(BlueprintPure)
    bool IsValidPathPoint(FVector& OutLocation, float InQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAerialCharaPoint(FVector InOffset, bool InRotateYaw);
    
    UFUNCTION(BlueprintCallable)
    bool IsTriggerBoxCondition(const ETriggerBoxCondition Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToad(EPlayerType PlayerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubStep(int32 InSubStep);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepAndSubStep(int32 InStep, int32 InSubStep);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStep(int32 InStep);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSceneSense();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningAITimer();
    
    UFUNCTION(BlueprintPure)
    bool IsRole(TEnumAsByte<EEndAiBattleRole::Type> InRole);
    
    UFUNCTION(BlueprintPure)
    bool IsRangeArea(AEndCharacter* InChara, FVector InLocation, float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverrideUpperAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotion(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockTargetCharaBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSyncAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDummyBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHPPercent(int32 Percent, EEndAiMathCmp cmp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEscaping();
    
    UFUNCTION(BlueprintCallable)
    void IsEnemyRangeBranch(float InMin, float InMax, EEndAiMathBinCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyRange(float InMin, float InMax);
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyDistanceLow(float InDistance);
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyDistanceHigh(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void IsEnemyDistanceBranch(float InDistance, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    void IsEnemyAngleFrontBranch(float InAngle, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal, bool InReverse);
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyAngleFront(float InAngle, bool InReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableProcessDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestruction(FName keyword);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayProcessing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombo(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurst();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenParts(FName partsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBPAttackChance();
    
    UFUNCTION(BlueprintCallable)
    void IsBoolBranch(FName Name, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleScenePhase(int32 InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleAIEnableTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBadState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsATBLightAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsATB(int32 InATB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAggressive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionTimeOver(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionLocalCount(FName InName, int32 InCount, EEndAiMathCmp InCmp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionCount(FName InName, int32 InCount, EEndAiMathCmp InCmp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbility(FName InName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IntCmpBranch(int32 ValueA, int32 ValueB, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
public:
    UFUNCTION(BlueprintCallable)
    void ImmediateRegisterMoveWeak(FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool ImmediateRegisterMove(FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool ImmediateMotion(FName InName, float Inter);
    
    UFUNCTION(BlueprintCallable)
    bool ImmediateBindAction(FName InName, int32 InCancelID);
    
    UFUNCTION(BlueprintCallable)
    bool ImmediateAction(FName InName);
    
    UFUNCTION(BlueprintPure)
    bool HasStatusDeBarrier(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget);
    
    UFUNCTION(BlueprintPure)
    bool HasStatusChangeEsuna(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget);
    
    UFUNCTION(BlueprintPure)
    bool HasStatusChangeDeSpell(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget);
    
    UFUNCTION(BlueprintPure)
    bool HasStatusChange(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialStatusByID(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialStatus(EEndBattleSpecialStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    bool HasDamageSource(FName DamageSourceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityCancelNumber();
    
    UFUNCTION(BlueprintCallable)
    void HaltAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorkVector(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWorkRotator(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorkName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkInt32(FName Name);
    
    UFUNCTION(BlueprintPure)
    float GetWorkFloat(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWorkBool(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWarpPosition(int32 warpPointId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETriggerBoxCondition GetTriggerBoxCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetTargetBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetTarget();
    
    UFUNCTION(BlueprintPure)
    TArray<AEndCharacter*> GetSyncActionCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleSyncActionType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetSummonMaster();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStep();
    
    UFUNCTION(BlueprintPure)
    TArray<AEndCharacter*> GetStatusChangeCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleStatusChangeType Type);
    
    UFUNCTION(BlueprintPure)
    float GetSplinePointFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplinePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpecialStatusType(TArray<EEndBattleSpecialStatusChangeType>& typeList) const;
    
    UFUNCTION(BlueprintPure)
    float GetSpecialStatusParamFloat(EEndBattleSpecialStatusChangeType Type, FName paramID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AEndCharacter*> GetSpecialStatusChangeCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, EEndBattleSpecialStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSceneEnemyCount();
    
    UFUNCTION(BlueprintPure)
    int32 GetRoleCount(TEnumAsByte<EEndAiBattleRole::Type> InRole);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EEndAiBattleRole::Type> GetRole();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReserveSubStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReserveStep();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EEndAiBattleRole::Type> GetReserveRole();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingLightAttackATB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingHardAttackATB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRatioSwitch3(int32 Switch0, int32 Switch1, int32 Switch2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRatioSwitch2(int32 Switch0, int32 Switch1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRatioSwitch(TArray<int32> inArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRaceCount(FName InRace);
    
    UFUNCTION(BlueprintPure)
    int32 GetRaceAndRoleCount(FName InRace, TEnumAsByte<EEndAiBattleRole::Type> InRole);
    
    UFUNCTION(BlueprintPure)
    float GetPathDistance(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyMember(TArray<AEndCharacter*>& OutMember, bool bIgnoreSelf);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartsHPPercent(FName partsID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNextWarpPosition();
    
    UFUNCTION(BlueprintPure)
    float GetNearestSplinePointFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNearestSplinePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHP();
    
    UFUNCTION(BlueprintPure)
    bool GetFirstDamageTime(float& FirstDamageTime, const UAnimSequence* AnimSequecne, float StartTime) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EEndAiEscapeState::Type> GetEscapeState();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBattleEntryType::Type> GetEntryType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEnemyVector();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyToPathDistance(FVector Location);
    
    UFUNCTION(BlueprintPure)
    float GetEnemysDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetEnemyRotation();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyPitchAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AEndCharacter*> GetEnemyMembersIgnoreSelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyMember(TArray<AEndCharacter*>& OutMember, bool bAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEnemyLocation();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyHeightDistanceAbs();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyHeightDistance();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDistance2D();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDistance();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyAngle();
    
    UFUNCTION(BlueprintPure)
    float GetEnemyABSAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetEasySpawnCharacter(const FName& keyword) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistance(AEndCharacter* Target, bool Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentBindAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharaSpec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaRoleID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaBattleID();
    
    UFUNCTION(BlueprintCallable)
    float GetBPPercent();
    
    UFUNCTION(BlueprintCallable)
    float GetBP();
    
    UFUNCTION(BlueprintPure)
    float GetBattleScenePhaseTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleScenePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndBattleSceneBlueprint* GetBattleSceneBlueprint();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBattleMoveType::Type> GetBattleMoveType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleInSituationType GetBattleInSituation();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBattleAIProgress::Type> GetBattleAIProgress();
    
    UFUNCTION(BlueprintPure)
    float GetBattleAIParam(TEnumAsByte<EBattleAIInfoParam::Type> InType);
    
    UFUNCTION(BlueprintPure)
    bool GetBattleAIFlag(TEnumAsByte<EBattleAIInfoFlag::Type> InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetATBMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetATB();
    
    UFUNCTION(BlueprintPure)
    float GetAirMoveGoalDistance2D();
    
    UFUNCTION(BlueprintPure)
    float GetAirMoveGoalDistance();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EBattleAirMoveType::Type> GetAerialMoveType();
    
    UFUNCTION(BlueprintPure)
    float GetAerialHeliVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEndCharacter* GetAerialBoidsLeader();
    
    UFUNCTION(BlueprintPure)
    float GetActionTime(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionRequestCount(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionLocalCount(FName InName);
    
    UFUNCTION(BlueprintPure)
    float GetActionInTime(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionCount(FName InName);
    
    UFUNCTION(BlueprintPure)
    TArray<AEndCharacter*> GetActionCharacter(TEnumAsByte<EEndAiBattleTargetType::Type> InTarget, FName InActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionAbilityLocalCountFromID(FName InAbilityID);
    
    UFUNCTION(BlueprintCallable)
    bool ForceRequestAction(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ForceEnableAimEffectorSetting(FName EffectorSettingName);
    
    UFUNCTION(BlueprintCallable)
    void ForceDisableAimEffectorSetting(FName EffectorSettingName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FloatCmpBranch(float ValueA, float ValueB, EEndAiMathCmp cmp, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishEscape();
    
    UFUNCTION(BlueprintCallable)
    void FinishBattle();
    
    UFUNCTION(BlueprintCallable)
    void EndFsmAddMotion();
    
    UFUNCTION(BlueprintCallable)
    void EndDisableLatestContactWall();
    
    UFUNCTION(BlueprintCallable)
    void EndBurstInstant();
    
    UFUNCTION(BlueprintCallable)
    void EnableProcessDead();
    
    UFUNCTION(BlueprintCallable)
    void EnableDamageReactionOwnerSyncAction();
    
    UFUNCTION(BlueprintCallable)
    void DoOnceWithThen(const EEndDoOnceCode Code, FLatentActionInfo LatentInfo, EEndDoOnceOutCode& Result);
    
    UFUNCTION(BlueprintCallable)
    void DisableProcessDead();
    
    UFUNCTION(BlueprintCallable)
    void DestroyDamageSource(FName DamageSourceID, bool bDestroyEffect);
    
    UFUNCTION(BlueprintCallable)
    void CreateSyncAction(FName syncActionID, AEndCharacter* targetChara, bool bOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void CreateOtherPath();
    
    UFUNCTION(BlueprintCallable)
    void CreateDamageSourceByCurrentTargetBase(FName DamageSourceID);
    
    UFUNCTION(BlueprintCallable)
    void CreateDamageSource(FName DamageSourceID, AEndCharacter* targetChara, FName AbilityID, bool bOverrideDamage, int32 OverrideDamage);
    
    UFUNCTION(BlueprintCallable)
    void ClearHPMinLimitPassiveDamage();
    
    UFUNCTION(BlueprintCallable)
    void ClearHPMinLimitAIPCAttack();
    
    UFUNCTION(BlueprintCallable)
    void ClearHPMinLimit();
    
    UFUNCTION(BlueprintCallable)
    void ClearDisableRemainAttributeEffect();
    
    UFUNCTION(BlueprintCallable)
    void ClearBPDamageCoefficient();
    
    UFUNCTION(BlueprintCallable)
    void ClearAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleScenePhase(int32 Phase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeCharacter(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeBlockTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeBlockCharacter(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void CancelGroundSpline();
    
    UFUNCTION(BlueprintCallable)
    void CancelActorChase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CalcATBCompareValue();
    
    UFUNCTION(BlueprintCallable)
    void CalcATBChangeValue(float IntervalTime, bool resetComparetiveATB, bool defaultIntervalSeconds);
    
    UFUNCTION(BlueprintCallable)
    void BranchXOR(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    void BranchOR(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
    UFUNCTION(BlueprintCallable)
    static void BranchAnd2(TEnumAsByte<EEndAIBranchBit::Type>& OutSignal, bool A, bool B);
    
    UFUNCTION(BlueprintCallable)
    void BranchAnd(bool Flag1, bool Flag2, TEnumAsByte<EEndAIBranchBit::Type>& OutSignal);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyHate();
    
    UFUNCTION(BlueprintCallable)
    void AIDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddWhiteListArea(FVector InLocation, float InRadius, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSubStep();
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialStatusByID(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialStatus(EEndBattleSpecialStatusChangeType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialStateEffectWithBeamTarget(FName specialStateEffectID, TArray<AEndCharacter*> beamTargetCharaList);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialStateEffect(FName specialStateEffectID);
    
    UFUNCTION(BlueprintCallable)
    void AddPathArea(FVector InLocation, float InRadius, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreNavArea(FName InName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddEasySpawnCharacter(FName keyword, FName CharaSpecName, bool spawnedInvisible, bool spawnedDisableCollision, EEndBattleEasySpawnEnableRagdollType enableRagdollType, float destroyTimer, bool recycle, bool enableStartupDestroyTimer);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDestructionPartsName(FName keyword, FName meshName, FName destructionPartsLabelName, FName restorePartsLabelName);
    
    UFUNCTION(BlueprintCallable)
    void AddDefenseArea(FVector InLocation, float InRadius, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddChaseArea(FVector InLocation, float InRadius, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddBlackListArea(FVector InLocation, float InRadius, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    bool AddBindAction(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachEffect(FEndCharacterAttachEffectArguments args);
    
    UFUNCTION(BlueprintCallable)
    void AddAreaFromModify(TEnumAsByte<EModifierVolumeType::Type> InType, int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddAirPointArea(FVector InLocation, float InRadius, int32 InGroup);
    
};

