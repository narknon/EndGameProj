#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAttributeBitType.generated.h"

UENUM()
enum class EEndBattleAttributeBitType {
    Fire = 0x1,
    Ice,
    Thunder = 0x4,
    Wind = 0x8,
    Earth = 0x10,
    Holy = 0x20,
    Dark = 0x40,
};

