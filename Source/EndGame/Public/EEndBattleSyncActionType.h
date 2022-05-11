#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSyncActionType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleSyncActionType : uint8 {
    None,
    Catch,
    Mount,
    Jump,
    Max,
};

