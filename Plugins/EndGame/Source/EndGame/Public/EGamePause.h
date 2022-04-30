#pragma once
#include "CoreMinimal.h"
#include "EGamePause.generated.h"

UENUM()
enum class EGamePause : uint8 {
    EGamePause_SYSTEM,
    EGamePause_LEVEL,
    EGamePause_DEBUG,
};

