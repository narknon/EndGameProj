#pragma once
#include "CoreMinimal.h"
#include "BikeTrikeStateTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FBikeTrikeStateTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID;
    
    ENDGAME_API FBikeTrikeStateTriggerData();
};

