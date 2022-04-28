#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAbilityCommandType.generated.h"

UENUM()
enum class EEndBattleAbilityCommandType : uint8 {
    None,
    Ability,
    Magic,
    Limit,
    Item,
    UltimateSummonMagic,
    Max,
};

