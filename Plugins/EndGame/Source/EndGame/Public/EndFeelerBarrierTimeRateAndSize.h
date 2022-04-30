#pragma once
#include "CoreMinimal.h"
#include "EndFeelerBarrierTimeRateAndSize.generated.h"

USTRUCT(BlueprintType)
struct FEndFeelerBarrierTimeRateAndSize {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimeRate;
    
    UPROPERTY(EditAnywhere)
    float TimeRateSpeed;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    ENDGAME_API FEndFeelerBarrierTimeRateAndSize();
};

