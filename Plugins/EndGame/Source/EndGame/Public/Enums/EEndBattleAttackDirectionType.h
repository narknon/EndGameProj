#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAttackDirectionType.generated.h"

UENUM()
enum class EEndBattleAttackDirectionType : uint8 {
    Front,
    Right,
    Left,
    Above,
    Below,
    Special,
};

