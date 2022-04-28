#pragma once
#include "CoreMinimal.h"
#include "EBattleInSituationType.generated.h"

UENUM()
enum class EBattleInSituationType : uint8 {
    eNone,
    eTakeAttack,
    eSense,
    eLink,
};

