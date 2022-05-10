#pragma once
#include "CoreMinimal.h"
#include "BikeLoccheStateTriggerCondition.generated.h"

USTRUCT(BlueprintType)
struct FBikeLoccheStateTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time_Before;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID;
    
    UPROPERTY(EditAnywhere)
    float Time_After;
    
    ENDGAME_API FBikeLoccheStateTriggerCondition();
};

