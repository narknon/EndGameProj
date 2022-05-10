#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSequencePlayAction.h"
#include "EndBehaviorResidentBlendAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorResidentBlendAction : public FEndBehaviorSequencePlayAction {
    GENERATED_BODY()
public:
    FEndBehaviorResidentBlendAction();
};

