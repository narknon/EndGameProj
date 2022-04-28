#pragma once
#include "CoreMinimal.h"
#include "EEndAiBattleTargetType.generated.h"

UENUM()
namespace EEndAiBattleTargetType {
    enum Type {
        Own,
        Target,
        Party,
        Enemy,
        Guest,
        Ucpc,
        All,
    };
}

