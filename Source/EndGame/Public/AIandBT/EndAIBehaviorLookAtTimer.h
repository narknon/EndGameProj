#pragma once
#include "CoreMinimal.h"
#include "EndAIBehaviorLookAt.h"
#include "EndAIBehaviorLookAtTimer.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorLookAtTimer : public FEndAIBehaviorLookAt {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LookAtTime;
    
    FEndAIBehaviorLookAtTimer();
};

