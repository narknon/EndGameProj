#pragma once
#include "CoreMinimal.h"
#include "EEndEffectInterpolateKind.generated.h"

UENUM()
enum class EEndEffectInterpolateKind : uint8 {
    Linear,
    EaseInOut,
};

