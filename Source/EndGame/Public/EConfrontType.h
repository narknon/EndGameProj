#pragma once
#include "CoreMinimal.h"
#include "EConfrontType.generated.h"

UENUM()
enum class EConfrontType : uint8 {
    COMBAT,
    CAUTION,
    COMMAND,
    STANDBY,
    ABILITY,
    LINK_ABILITY,
    WRAPAROUND,
    COMMAND_FALLBACK,
    COMMAND_TELEPORT,
};

