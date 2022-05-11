#pragma once
#include "CoreMinimal.h"
#include "EEndEmissiveModifierType.generated.h"

UENUM(BlueprintType)
enum class EEndEmissiveModifierType : uint8 {
    Overlay,
    Scale,
};

