#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIHelicopterMoveParam_MoveAround.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAIHelicopterMoveParam_MoveAround {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TargetOppositeSlide;
    
    UPROPERTY(EditAnywhere)
    float SlideInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float RelativeForwardMileage;
    
    UPROPERTY(EditAnywhere)
    float RelativeBackwardMileage;
    
    UPROPERTY(EditAnywhere)
    float RelativeForwardMileageSecond;
    
    UPROPERTY(EditAnywhere)
    float ForwardArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float SwitchYawSlide;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    float HeightOnForward;
    
    UPROPERTY(EditAnywhere)
    float HeightArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveBackwardRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveBackwardLimitCount;
    
    ENDGAME_API FEndBikeAIHelicopterMoveParam_MoveAround();
};

