#pragma once
#include "CoreMinimal.h"
#include "EPraecoMiniGoToMode.generated.h"

UENUM(BlueprintType)
enum class EPraecoMiniGoToMode : uint8 {
    Owner,
    Target,
    Max,
};

