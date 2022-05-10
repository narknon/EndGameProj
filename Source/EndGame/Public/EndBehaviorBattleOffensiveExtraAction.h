#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorLoopExtraAction.h"
#include "EndBehaviorBattleOffensiveExtraAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorBattleOffensiveExtraAction : public FEndBehaviorLoopExtraAction {
    GENERATED_BODY()
public:
    FEndBehaviorBattleOffensiveExtraAction();
};

