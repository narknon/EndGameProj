#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSequencePlayAction.h"
#include "EndBehaviorLocomotion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorLocomotion : public FEndBehaviorSequencePlayAction {
    GENERATED_BODY()
public:
    FEndBehaviorLocomotion();
};

