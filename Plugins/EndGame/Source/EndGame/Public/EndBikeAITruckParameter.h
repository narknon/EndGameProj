#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeAITruckGunFireInfo.h"
#include "EndBikeAITruckParameter.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAITruckParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float General_SlideChangeRollToYawBias;
    
    UPROPERTY(EditAnywhere)
    float General_MovableSlideLength;
    
    UPROPERTY(EditAnywhere)
    float General_RestoreRollInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float General_KeepRelativeDistance;
    
    UPROPERTY(EditAnywhere)
    float General_KeepRelativeDistanceAtLastOneEnemy;
    
    UPROPERTY(EditAnywhere)
    float General_RelativeSpeedAtLastOneEnemy;
    
    UPROPERTY(EditAnywhere)
    float General_MoveDistanceRangeMaxAtLastOneEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector General_CarBodyHalfSize;
    
    UPROPERTY(EditAnywhere)
    float Tackle_BeforePullOverSlide;
    
    UPROPERTY(EditAnywhere)
    float Tackle_SlideSpeedOnPullOver;
    
    UPROPERTY(EditAnywhere)
    float Tackle_SlideSpeedOnAttack;
    
    UPROPERTY(EditAnywhere)
    float Tackle_MaxRotateRateAfterHitWall;
    
    UPROPERTY(EditAnywhere)
    float Tackle_MaxAttackingTime;
    
    UPROPERTY(EditAnywhere)
    float Tackle_ConstantArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float Tackle_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float Tackle_Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GunFire_TargetLocationRandomRot;
    
    UPROPERTY(EditAnywhere)
    float GunFire_SlideMoveRate;
    
    UPROPERTY(EditAnywhere)
    float GunFire_MaxSlideSpeedLength;
    
    UPROPERTY(EditAnywhere)
    float GunFire_MovableSlideLength;
    
    UPROPERTY(EditAnywhere)
    float GunFire_SlideMoveRateOnHitWall;
    
    UPROPERTY(EditAnywhere)
    float GunFire_DelayStartTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_HatchLoopTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_AfterShootingTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_ShootingInterval;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GunFire_ValidAngleRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GunFire_ValidSlideRange;
    
    UPROPERTY(EditAnywhere)
    float GunFire_BeginShootTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_EnableSlideMoveDistance;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GunFire_AimClampRange;
    
    UPROPERTY(EditAnywhere)
    float GunFire_ConstantArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float GunFire_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float GunFire_Acceleration;
    
    UPROPERTY(EditAnywhere)
    float GunFire_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GunFire_LaserEffectName;
    
    UPROPERTY(EditAnywhere)
    float GunFire_LaserTargetHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float GunFire_BeginLaserEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GunFire_LockOnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GunFire_ThresholdDamagePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GunFire_DamageTalkTriggerSetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAITruckGunFireInfo> GunFire_DamageSourceInfo;
    
    ENDGAME_API FEndBikeAITruckParameter();
};

