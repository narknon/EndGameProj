#pragma once
#include "CoreMinimal.h"
#include "EFallState.generated.h"

UENUM(BlueprintType)
enum class EFallState : uint8 {
    Pending,
    Fall,
    Land,
};

