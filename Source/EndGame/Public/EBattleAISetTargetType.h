#pragma once
#include "CoreMinimal.h"
#include "EBattleAISetTargetType.generated.h"

UENUM(BlueprintType)
enum class EBattleAISetTargetType : uint8 {
    UCPC,
    FarPC,
    NearPC,
};

