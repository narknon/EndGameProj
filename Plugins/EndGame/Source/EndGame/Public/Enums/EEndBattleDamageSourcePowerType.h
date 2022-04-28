#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourcePowerType.generated.h"

UENUM()
enum class EEndBattleDamageSourcePowerType : uint8 {
    Normal,
    Constant,
    MaxHpPercent,
    HpPercent,
    ATBPercent,
    HPOneSingleDigit,
};

