#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtModifierType.generated.h"

UENUM()
enum class EEndLookAtModifierType : uint8 {
    None,
    ForceEnableLookAt,
    ForceDisableLookAt,
    HeadOnly,
    MeshSpace,
    WeightBias,
    Max,
};

