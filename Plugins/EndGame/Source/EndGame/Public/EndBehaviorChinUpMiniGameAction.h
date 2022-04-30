#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorSquatMiniGameAction.h"
#include "EndBehaviorChinUpMiniGameAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorChinUpMiniGameAction : public FEndBehaviorSquatMiniGameAction {
    GENERATED_BODY()
public:
    FEndBehaviorChinUpMiniGameAction();
};

