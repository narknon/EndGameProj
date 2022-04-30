#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIHelicopterMoveParam_MoveForward.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAIHelicopterMoveParam_MoveForward {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RelativeSpeed;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedOnRotateYaw;
    
    ENDGAME_API FEndBikeAIHelicopterMoveParam_MoveForward();
};

