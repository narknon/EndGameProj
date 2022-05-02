#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorWait.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorWait : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    FEndAIBehaviorWait();
};

