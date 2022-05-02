#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIHelicopterMoveParam_MoveBackward.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAIHelicopterMoveParam_MoveBackward {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartHeight;
    
    UPROPERTY(EditAnywhere)
    float StartHeightArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float MoveBackwardStartTime;
    
    UPROPERTY(EditAnywhere)
    float MoveBackwardTime;
    
    UPROPERTY(EditAnywhere)
    float MoveBackwardDistance;
    
    UPROPERTY(EditAnywhere)
    float MoveBackwardHeight;
    
    UPROPERTY(EditAnywhere)
    float MoveBackwardHeightArrivalTime;
    
    ENDGAME_API FEndBikeAIHelicopterMoveParam_MoveBackward();
};

