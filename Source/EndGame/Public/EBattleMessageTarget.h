#pragma once
#include "CoreMinimal.h"
#include "EBattleMessageTarget.generated.h"

UENUM(BlueprintType)
namespace EBattleMessageTarget {
    enum Type {
        eAll,
        eAIPC,
        eEnemy,
        eCloud,
        eBarret,
        eTifa,
        eAerith,
    };
}

