#pragma once
#include "CoreMinimal.h"
#include "EndRangeSwitchParam.generated.h"

USTRUCT(BlueprintType)
struct FEndRangeSwitchParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Equal;
    
    ENDGAME_API FEndRangeSwitchParam();
};

