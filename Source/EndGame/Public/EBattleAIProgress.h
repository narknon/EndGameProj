#pragma once
#include "CoreMinimal.h"
#include "EBattleAIProgress.generated.h"

UENUM(BlueprintType)
namespace EBattleAIProgress {
    enum Type {
        eBeforeOnPrepare,
        eBeforeOnFirst,
        eUpdate,
    };
}

