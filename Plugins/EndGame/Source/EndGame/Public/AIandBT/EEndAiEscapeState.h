#pragma once
#include "CoreMinimal.h"
#include "EEndAiEscapeState.generated.h"

UENUM()
namespace EEndAiEscapeState {
    enum Type {
        Aggressive,
        EscapeBegin,
        EscapeWait,
        EscapeEnd,
    };
}

