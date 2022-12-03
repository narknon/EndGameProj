#pragma once
#include "CoreMinimal.h"
#include "EEndLookAtModifierType.generated.h"

UENUM(BlueprintType)
enum class EEndLookAtModifierType : uint8 {
    None,
    ForceEnableLookAt,
    ForceDisableLookAt,
    HeadOnly,
    MeshSpace,
    WeightBias,
    Max,
};

