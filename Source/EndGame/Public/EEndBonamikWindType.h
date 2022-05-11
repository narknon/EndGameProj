#pragma once
#include "CoreMinimal.h"
#include "EEndBonamikWindType.generated.h"

UENUM(BlueprintType)
enum class EEndBonamikWindType : uint8 {
    Directional,
    Wave,
    DirectionalAndWave,
};

