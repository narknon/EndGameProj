#pragma once
#include "CoreMinimal.h"
#include "EEndAiBattleSecondRole.generated.h"

UENUM()
namespace EEndAiBattleSecondRole {
    enum Type {
        Hp_50,
        Hp_40,
        Hp_30,
        Hp_20,
        Hp_10,
        Hp_MAX UMETA(Hidden),
    };
}

