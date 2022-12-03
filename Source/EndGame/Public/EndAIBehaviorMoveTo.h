#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EFieldAiPathWayType.h"
#include "EEndAiMoveType.h"
#include "EndAIBehaviorMoveTo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorMoveTo : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WalkTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StopTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInterpolationMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndAiMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFieldAiPathWayType PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanOutSideMove;
    
    FEndAIBehaviorMoveTo();
};

