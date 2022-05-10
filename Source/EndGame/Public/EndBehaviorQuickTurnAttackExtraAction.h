#pragma once
#include "CoreMinimal.h"
#include "EndBehaviorBattleAbilityExtraAction.h"
#include "EndBehaviorQuickTurnAttackExtraAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBehaviorQuickTurnAttackExtraAction : public FEndBehaviorBattleAbilityExtraAction {
    GENERATED_BODY()
public:
    FEndBehaviorQuickTurnAttackExtraAction();
};

