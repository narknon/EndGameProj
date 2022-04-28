#pragma once
#include "CoreMinimal.h"
#include "ETriggerWeakRemakeType.generated.h"

UENUM()
enum class ETriggerWeakRemakeType : uint8 {
    Remake,
    Retain,
    ResetCurrentOnly,
    Retain2,
};

