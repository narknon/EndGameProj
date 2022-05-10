#pragma once
#include "CoreMinimal.h"
#include "EEndBattleRewardType.generated.h"

UENUM()
enum class EEndBattleRewardType : uint8 {
    Exp,
    Ap,
    Gil,
    Drop,
    Steal,
};

