#pragma once
#include "CoreMinimal.h"
#include "EGamePause.generated.h"

UENUM(BlueprintType)
enum class EGamePause : uint8 {
    EGamePause_SYSTEM,
    EGamePause_LEVEL,
    EGamePause_DEBUG,
};

