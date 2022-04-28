#pragma once
#include "CoreMinimal.h"
#include "EBattleMessageTarget.generated.h"

UENUM()
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

