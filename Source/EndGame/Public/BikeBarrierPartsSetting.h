#pragma once
#include "CoreMinimal.h"
#include "BikeBarrierPartsSetting.generated.h"

USTRUCT(BlueprintType)
struct FBikeBarrierPartsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BarrierCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotContinuous;
    
    ENDGAME_API FBikeBarrierPartsSetting();
};

