#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSequencePlayAction.h"
#include "EndBehaviorSlaveAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorSlaveAction : public FEndBehaviorSequencePlayAction {
    GENERATED_BODY()
public:
    FEndBehaviorSlaveAction();
};

