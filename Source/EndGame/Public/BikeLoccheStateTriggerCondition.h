#pragma once
#include "CoreMinimal.h"
#include "BikeLoccheStateTriggerCondition.generated.h"

USTRUCT(BlueprintType)
struct FBikeLoccheStateTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time_Before;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time_After;
    
    ENDGAME_API FBikeLoccheStateTriggerCondition();
};

