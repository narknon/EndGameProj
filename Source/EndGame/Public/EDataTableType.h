#pragma once
#include "CoreMinimal.h"
#include "EDataTableType.generated.h"

UENUM()
enum class EDataTableType : uint8 {
    EDataTableType_FILED,
    EDataTableType_RESIDNET,
    EDataTableType_DEBUG,
    EDataTableType_Max,
    EDataTableType_DEBUG_Max = 0x80,
};

