#pragma once
#include "CoreMinimal.h"
#include "EAutoDoorActiveEffectType.generated.h"

UENUM()
enum class EAutoDoorActiveEffectType : uint8 {
    AutoDoorActiveNone,
    AutoDoorActiveLeft,
    AutoDoorActiveRight,
    AutoDoorActiveBath,
};

