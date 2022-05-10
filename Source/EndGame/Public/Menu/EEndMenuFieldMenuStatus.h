#pragma once
#include "CoreMinimal.h"
#include "EEndMenuFieldMenuStatus.generated.h"

UENUM(Blueprintable)
enum class EEndMenuFieldMenuStatus : uint8 {
    IsWaitMode,
    IsWaitModeCmd,
    IsLockonSelect,
};

