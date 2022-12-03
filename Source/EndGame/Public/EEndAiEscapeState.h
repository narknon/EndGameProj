#pragma once
#include "CoreMinimal.h"
#include "EEndAiEscapeState.generated.h"

UENUM(BlueprintType)
namespace EEndAiEscapeState {
    enum Type {
        Aggressive,
        EscapeBegin,
        EscapeWait,
        EscapeEnd,
    };
}

