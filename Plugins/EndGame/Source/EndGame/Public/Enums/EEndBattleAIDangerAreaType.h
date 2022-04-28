#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAIDangerAreaType.generated.h"

UENUM()
enum class EEndBattleAIDangerAreaType : uint8 {
    eNone,
    eCircle,
    eRectangle,
};

