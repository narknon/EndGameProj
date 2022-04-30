#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSequentialExtraAction.h"
#include "EndBehaviorSwitchBehaviorExtraAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorSwitchBehaviorExtraAction : public FEndBehaviorSequentialExtraAction {
    GENERATED_BODY()
public:
    FEndBehaviorSwitchBehaviorExtraAction();
};

