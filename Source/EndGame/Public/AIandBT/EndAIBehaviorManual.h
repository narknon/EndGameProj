#pragma once
#include "CoreMinimal.h"
#include "EEndAIBehaviorTag.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorManual.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorManual : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEndAIBehaviorTag BehaviorTag;
    
    FEndAIBehaviorManual();
};

