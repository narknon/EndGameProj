#pragma once
#include "CoreMinimal.h"
#include "EVfxNonUniformKind.generated.h"

UENUM()
enum class EVfxNonUniformKind {
    None,
    Linear,
    Multiply,
    MultiplyAverage,
    ArcSin,
};

