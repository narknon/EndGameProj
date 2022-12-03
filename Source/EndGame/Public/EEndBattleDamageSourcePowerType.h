#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourcePowerType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleDamageSourcePowerType : uint8 {
    Normal,
    Constant,
    MaxHpPercent = 0x3,
    HpPercent = 0x5,
    ATBPercent = 0xA,
    HPOneSingleDigit,
};

