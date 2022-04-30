#pragma once
#include "CoreMinimal.h"
#include "EEndBikeAbilityType.generated.h"

UENUM()
enum class EEndBikeAbilityType {
    None,
    PlayerNormal,
    PlayerATB,
    PlayerLimit,
    EnemyNormal = 0xA,
    EnemySpecial,
};

