#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorOverrideIdleVariation.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorOverrideIdleVariation : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, float> OverrideIdleVariationList;
    
    FEndAIBehaviorOverrideIdleVariation();
};

