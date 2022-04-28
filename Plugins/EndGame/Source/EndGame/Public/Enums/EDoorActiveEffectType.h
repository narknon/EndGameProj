#pragma once
#include "CoreMinimal.h"
#include "EDoorActiveEffectType.generated.h"

UENUM()
enum class EDoorActiveEffectType : uint8 {
    ActiveNone,
    ActiveLeft,
    ActiveRight,
    ActiveBath,
};

