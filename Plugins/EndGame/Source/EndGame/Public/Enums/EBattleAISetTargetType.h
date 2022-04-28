#pragma once
#include "CoreMinimal.h"
#include "EBattleAISetTargetType.generated.h"

UENUM()
enum class EBattleAISetTargetType : uint8 {
    UCPC,
    FarPC,
    NearPC,
};

