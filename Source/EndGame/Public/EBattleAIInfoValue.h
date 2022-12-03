#pragma once
#include "CoreMinimal.h"
#include "EBattleAIInfoValue.generated.h"

UENUM(BlueprintType)
namespace EBattleAIInfoValue {
    enum Type {
        eDodgeIntervalCount,
        eDodgePercent,
        eFearIntervalCount,
        eFearPercent,
        eTriggerCount0,
        eTriggerCount1,
        eTriggerCount2,
        eTriggerCount3,
        eLookChange,
        eMAX,
    };
}

