#pragma once
#include "CoreMinimal.h"
#include "EEndMenuMessageWindowFlags.generated.h"

UENUM()
enum class EEndMenuMessageWindowFlags : uint8 {
    None,
    LeftAlignedOptions,
    PauseMenu,
};

