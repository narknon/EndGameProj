#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeAIHelicopterParameter.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAIHelicopterParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Move_DefaultYow;
    
    UPROPERTY(EditAnywhere)
    float Move_DefaultPitch;
    
    UPROPERTY(EditAnywhere)
    float Move_BaseHeight;
    
    UPROPERTY(EditAnywhere)
    float Move_WithinRoadSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Move_ArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Move_ErrorRange;
    
    UPROPERTY(EditAnywhere)
    float Move_MaxPitchAngle;
    
    UPROPERTY(EditAnywhere)
    float Move_MaxPitchSpeed;
    
    UPROPERTY(EditAnywhere)
    float Move_PitchDefaultSpeed;
    
    UPROPERTY(EditAnywhere)
    float Move_MaxSlideRollAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Move_SpeedLimit;
    
    UPROPERTY(EditAnywhere)
    float Move_WallHeight;
    
    UPROPERTY(EditAnywhere)
    float Move_CenterObstacleHeight;
    
    UPROPERTY(EditAnywhere)
    float Move_SplineOffsetForCalcCurvature;
    
    UPROPERTY(EditAnywhere)
    float Move_CurvatureMaxDeltaYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Move_OffsetOnNotAttack;
    
    UPROPERTY(EditAnywhere)
    float Move_MaxSlideOnNotAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Atk_SelectPlayerAsTargetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Atk_HitPointOfCancelAttack;
    
    UPROPERTY(EditAnywhere)
    float LookAt_RecoveryDelayTime;
    
    UPROPERTY(EditAnywhere)
    float LookAt_YawSpeed;
    
    UPROPERTY(EditAnywhere)
    float LookAt_YawAccel;
    
    UPROPERTY(EditAnywhere)
    float LookAt_YawArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_SpeedForFirstStep;
    
    UPROPERTY(EditAnywhere)
    float GunFire_DistanceForFirstStep;
    
    UPROPERTY(EditAnywhere)
    float GunFire_MaxTimeOfFitstStep;
    
    UPROPERTY(EditAnywhere)
    float GunFire_CorrectionRate;
    
    UPROPERTY(EditAnywhere)
    float GunFire_YawLimit;
    
    UPROPERTY(EditAnywhere)
    float GunFire_Interval;
    
    UPROPERTY(EditAnywhere)
    float Missile_InitDistance;
    
    UPROPERTY(EditAnywhere)
    float Missile_InitKeepTime;
    
    UPROPERTY(EditAnywhere)
    float Missile_InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseJumpAttack;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_DistanceLv0;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_DistanceLv1;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_DistanceLv2;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_DistanceLv3;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval JumpArea_MachineGunRange;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_StartForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_MoveBackwardStartTime;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_MoveBackwardDistance;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_MoveBackwardTime;
    
    UPROPERTY(EditAnywhere)
    float JumpArea_WaitTimeIfReceiveJumpAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpArea_TalkTriggerSetID;
    
    UPROPERTY(EditAnywhere)
    float Obstacle_BeginAvoidLength;
    
    UPROPERTY(EditAnywhere)
    float StopToExit_SlideInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopToExit_HeightSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopToExit_RelativeDistance;
    
    UPROPERTY(EditAnywhere)
    float StopToExit_RemoveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionNoAttack_DamageValue;
    
    UPROPERTY(EditAnywhere)
    float TransitionNoAttack_TimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEventHelicopter;
    
    ENDGAME_API FEndBikeAIHelicopterParameter();
};

