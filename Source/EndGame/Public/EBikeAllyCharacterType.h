#pragma once
#include "CoreMinimal.h"
#include "EBikeAllyCharacterType.generated.h"

UENUM(BlueprintType)
enum class EBikeAllyCharacterType : uint8 {
    Default,
    Main,
    Rider1,
    Rider2,
    Rider3,
    RiderAll,
};

