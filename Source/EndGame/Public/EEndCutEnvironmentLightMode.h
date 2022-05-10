#pragma once
#include "CoreMinimal.h"
#include "EEndCutEnvironmentLightMode.generated.h"

UENUM(BlueprintType)
enum class EEndCutEnvironmentLightMode : uint8 {
    CELM_All,
    CELM_Part,
    CELM_Max,
};

