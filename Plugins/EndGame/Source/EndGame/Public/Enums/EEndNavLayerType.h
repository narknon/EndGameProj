#pragma once
#include "CoreMinimal.h"
#include "EEndNavLayerType.generated.h"

UENUM()
enum class EEndNavLayerType : uint8 {
    Normal,
    Medium,
    OneLarge,
    TwoLarge,
    ThreeLarge,
    FourLarge,
    LayerMax,
};

