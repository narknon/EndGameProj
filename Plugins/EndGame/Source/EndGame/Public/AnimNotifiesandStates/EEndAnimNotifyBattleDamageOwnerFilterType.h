#pragma once
#include "CoreMinimal.h"
#include "EEndAnimNotifyBattleDamageOwnerFilterType.generated.h"

UENUM(Blueprintable)
enum class EEndAnimNotifyBattleDamageOwnerFilterType : uint8 {
    eALL,
    ePlayer,
    eEnemy,
};

