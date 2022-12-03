#pragma once
#include "CoreMinimal.h"
#include "EMoveToGroundHeightType.generated.h"

UENUM(BlueprintType)
enum class EMoveToGroundHeightType : uint8 {
    Ground,
    SpecifiedHeight,
};

