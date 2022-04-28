#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSyncActionType.generated.h"

UENUM()
enum class EEndBattleSyncActionType : uint8 {
    None,
    Catch,
    Mount,
    Jump,
    Max,
};

