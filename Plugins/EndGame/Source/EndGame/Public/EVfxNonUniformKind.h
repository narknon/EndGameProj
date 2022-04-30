#pragma once
#include "CoreMinimal.h"
#include "EVfxNonUniformKind.generated.h"

UENUM()
enum class EVfxNonUniformKind : uint8 {
    None,
    Linear,
    Multiply,
    MultiplyAverage,
    ArcSin,
};

