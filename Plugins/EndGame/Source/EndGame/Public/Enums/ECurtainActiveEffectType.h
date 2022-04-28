#pragma once
#include "CoreMinimal.h"
#include "ECurtainActiveEffectType.generated.h"

UENUM()
enum class ECurtainActiveEffectType : uint8 {
    CurtainActiveNone,
    CurtainActiveLeft,
    CurtainActiveRight,
    CurtainActiveBath,
};

