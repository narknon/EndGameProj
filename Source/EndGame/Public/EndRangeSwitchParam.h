#pragma once
#include "CoreMinimal.h"
#include "EndRangeSwitchParam.generated.h"

USTRUCT(BlueprintType)
struct FEndRangeSwitchParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Equal;
    
    ENDGAME_API FEndRangeSwitchParam();
};

