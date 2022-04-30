#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAbilityTargetCloseMoveType.generated.h"

UENUM()
enum class EEndBattleAbilityTargetCloseMoveType : uint8 {
    Stop,
    None,
    Push,
};

