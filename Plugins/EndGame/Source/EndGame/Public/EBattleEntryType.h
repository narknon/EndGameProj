#pragma once
#include "CoreMinimal.h"
#include "EBattleEntryType.generated.h"

UENUM()
namespace EBattleEntryType {
    enum Type {
        eNone,
        eSpecial,
        eWall,
        eAerial,
    };
}

