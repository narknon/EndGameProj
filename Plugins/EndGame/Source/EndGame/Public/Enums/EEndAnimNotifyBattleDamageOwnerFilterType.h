#pragma once
#include "CoreMinimal.h"
#include "EEndAnimNotifyBattleDamageOwnerFilterType.generated.h"

UENUM()
enum class EEndAnimNotifyBattleDamageOwnerFilterType : uint8 {
    eALL,
    ePlayer,
    eEnemy,
};

