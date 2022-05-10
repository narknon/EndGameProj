#pragma once
#include "CoreMinimal.h"
#include "EEndMenuMessageWindowFlags.generated.h"

UENUM(Blueprintable)
enum class EEndMenuMessageWindowFlags : uint8 {
    None,
    LeftAlignedOptions,
    PauseMenu,
};

