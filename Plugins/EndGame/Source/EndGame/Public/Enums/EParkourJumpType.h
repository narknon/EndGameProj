#pragma once
#include "CoreMinimal.h"
#include "EParkourJumpType.generated.h"

UENUM()
enum class EParkourJumpType : uint8 {
    ParkourJumpShort,
    ParkourJumpLong,
    ParkourJumpFall,
    ParkourJumpSpecial,
};

