#pragma once
#include "CoreMinimal.h"
#include "EFallState.generated.h"

UENUM()
enum class EFallState {
    Pending,
    Fall,
    Land,
};

