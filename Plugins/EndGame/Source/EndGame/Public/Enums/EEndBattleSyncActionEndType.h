#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSyncActionEndType.generated.h"

UENUM()
enum class EEndBattleSyncActionEndType : uint8 {
    None,
    Escape,
    FinalAttack,
    Max,
};

