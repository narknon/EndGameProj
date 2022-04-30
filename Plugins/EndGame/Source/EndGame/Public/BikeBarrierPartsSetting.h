#pragma once
#include "CoreMinimal.h"
#include "BikeBarrierPartsSetting.generated.h"

USTRUCT(BlueprintType)
struct FBikeBarrierPartsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 BarrierCount;
    
    UPROPERTY(EditAnywhere)
    float KeepTime;
    
    UPROPERTY(EditAnywhere)
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotContinuous;
    
    ENDGAME_API FBikeBarrierPartsSetting();
};

