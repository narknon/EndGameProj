#pragma once
#include "CoreMinimal.h"
#include "EBattleOrderRule.generated.h"

UENUM()
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

