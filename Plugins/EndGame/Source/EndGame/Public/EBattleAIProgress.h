#pragma once
#include "CoreMinimal.h"
#include "EBattleAIProgress.generated.h"

UENUM()
namespace EBattleAIProgress {
    enum Type {
        eBeforeOnPrepare,
        eBeforeOnFirst,
        eUpdate,
    };
}

