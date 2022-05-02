#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndBikeAISoldier3rdParameter.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAISoldier3rdParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float General_RunParallelForwardRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MoveToSide_ConditionalAbilityName;
    
    UPROPERTY(EditAnywhere)
    float MoveToSide_BaseSlide;
    
    UPROPERTY(EditAnywhere)
    float MoveToSide_MaxRoadWidth;
    
    UPROPERTY(EditAnywhere)
    float MoveToSide_InvalidJumpDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveToSide_MaxTime;
    
    UPROPERTY(EditAnywhere)
    float MoveToSide_CancelFrontDistance;
    
    UPROPERTY(EditAnywhere)
    float MiddleRangeAtk_Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiddleRangeAtk_SelectRateWhenOnlySelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiddleRangeAtk_SelectRateWhenBothSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiddleRangeAtk_EnableRepeatNum;
    
    UPROPERTY(EditAnywhere)
    float MiddleRangeAtk_DamageAmount;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval AIMove_SwitchToAllyInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIMove_RateOfTargetToAlly;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval AIMove_SwitchToPlayerInterval;
    
    UPROPERTY(EditAnywhere)
    float AIMove_LimitDistanceForTargetPlayer;
    
    UPROPERTY(EditAnywhere)
    float IdleMove_MinSlideDistance;
    
    UPROPERTY(EditAnywhere)
    float IdleMove_MinSlideSpeed;
    
    UPROPERTY(EditAnywhere)
    float HitPoint_ToPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HelicopterMissileAbilities;
    
    ENDGAME_API FEndBikeAISoldier3rdParameter();
};

