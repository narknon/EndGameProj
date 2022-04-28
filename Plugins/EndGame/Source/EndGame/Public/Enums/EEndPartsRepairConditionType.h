#pragma once
#include "CoreMinimal.h"
#include "EEndPartsRepairConditionType.generated.h"

UENUM()
enum class EEndPartsRepairConditionType : uint8 {
    Default,
    UnbrokenPartsFullRecovery,
};

