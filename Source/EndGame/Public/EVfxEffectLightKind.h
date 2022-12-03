#pragma once
#include "CoreMinimal.h"
#include "EVfxEffectLightKind.generated.h"

UENUM(BlueprintType)
enum class EVfxEffectLightKind : uint8 {
    Unpunctual,
    Punctual,
    Max,
};

