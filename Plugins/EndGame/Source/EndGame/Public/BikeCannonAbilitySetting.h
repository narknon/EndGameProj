#pragma once
#include "CoreMinimal.h"
#include "BikeCannonAbilitySetting.generated.h"

USTRUCT(BlueprintType)
struct FBikeCannonAbilitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LoopTime;
    
    UPROPERTY(EditAnywhere)
    float WaitTime_First;
    
    UPROPERTY(EditAnywhere)
    uint8 FireNum;
    
    UPROPERTY(EditAnywhere)
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddMotion_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddMotion_Left;
    
    ENDGAME_API FBikeCannonAbilitySetting();
};

