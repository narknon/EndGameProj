#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EEndLookAtRequestType.h"
#include "UObject/NoExportTypes.h"
#include "EndAIBehaviorSaccade.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorSaccade : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndLookAtRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    FEndAIBehaviorSaccade();
};

