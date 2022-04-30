#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSequencePlayAction.h"
#include "EndBehaviorDeadAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorDeadAction : public FEndBehaviorSequencePlayAction {
    GENERATED_BODY()
public:
    FEndBehaviorDeadAction();
};

