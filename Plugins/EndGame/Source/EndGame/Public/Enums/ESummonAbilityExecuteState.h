#pragma once
#include "CoreMinimal.h"
#include "ESummonAbilityExecuteState.generated.h"

UENUM()
enum class ESummonAbilityExecuteState {
    eNone,
    eRequesting,
    eInAction,
    eCompleted,
};

