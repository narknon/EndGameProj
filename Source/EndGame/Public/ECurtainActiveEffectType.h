#pragma once
#include "CoreMinimal.h"
#include "ECurtainActiveEffectType.generated.h"

UENUM(BlueprintType)
enum class ECurtainActiveEffectType : uint8 {
    CurtainActiveNone,
    CurtainActiveLeft,
    CurtainActiveRight,
    CurtainActiveBath,
};

