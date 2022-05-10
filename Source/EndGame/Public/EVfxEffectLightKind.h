#pragma once
#include "CoreMinimal.h"
#include "EVfxEffectLightKind.generated.h"

UENUM()
enum class EVfxEffectLightKind : uint8 {
    Unpunctual,
    Punctual,
    Max,
};

