#pragma once
#include "CoreMinimal.h"
#include "EBattleOrderRule.generated.h"

UENUM(BlueprintType)
namespace EBattleOrderRule {
    enum Type {
        eNone,
        eRandom,
        eNear,
        eFar,
        eCLOUDOnly,
        eBARRETOnly,
        eTIFAOnly,
    };
}

