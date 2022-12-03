#pragma once
#include "CoreMinimal.h"
#include "EndBattleSetNormalAttackCountCondition.generated.h"

UENUM(BlueprintType)
enum class EndBattleSetNormalAttackCountCondition : uint8 {
    None,
    TifaBuff,
    CloudUniqueAbilityMode,
    LinkCommandMode,
};

