#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAIParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAIParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Movable;
    
    UPROPERTY(EditAnywhere)
    uint8 HitWall;
    
    UPROPERTY(EditAnywhere)
    uint8 HitObject;
    
    UPROPERTY(EditAnywhere)
    uint8 HitSelfReaction;
    
    UPROPERTY(EditAnywhere)
    uint8 HitOthersReaction;
    
    UPROPERTY(EditAnywhere)
    uint8 FitFloor;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxWeight;
    
    UPROPERTY(EditAnywhere)
    uint8 DisableTickPause;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableSafeTransform;
    
    UPROPERTY(EditAnywhere)
    uint8 ForceTurn;
    
    UPROPERTY(EditAnywhere)
    uint8 InterpolationMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WalkRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoalRadius;
    
    UPROPERTY(EditAnywhere)
    float FollowUpDashDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 ForceWalk;
    
    UPROPERTY(EditAnywhere)
    float FlightMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float FlightAcceleration;
    
    UPROPERTY(EditAnywhere)
    uint8 NoOverTaking;
    
    UPROPERTY(EditAnywhere)
    float NoOverTakingDistance;
    
    UPROPERTY(EditAnywhere)
    float StopDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 LeadTurn;
    
    UPROPERTY(EditAnywhere)
    float RangeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayTimeMIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayTimeRand;
    
    UPROPERTY(EditAnywhere)
    float TurnBackDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveStartDistance;
    
    FEndDataTableAIParameter();
};

