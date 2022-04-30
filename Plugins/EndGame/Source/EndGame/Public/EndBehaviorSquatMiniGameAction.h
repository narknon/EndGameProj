#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorExtraAction.h"
#include "EndBehaviorSquatMiniGameAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorSquatMiniGameAction : public FEndBehaviorExtraAction {
    GENERATED_BODY()
public:
    FEndBehaviorSquatMiniGameAction();
};

