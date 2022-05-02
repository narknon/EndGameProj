#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorPlayExtraAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorPlayExtraAction : public FEndAIBehavior {
    GENERATED_BODY()
public:
    FEndAIBehaviorPlayExtraAction();
};

