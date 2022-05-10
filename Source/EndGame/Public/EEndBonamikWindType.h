#pragma once
#include "CoreMinimal.h"
#include "EEndBonamikWindType.generated.h"

UENUM()
enum class EEndBonamikWindType : uint8 {
    Directional,
    Wave,
    DirectionalAndWave,
};

