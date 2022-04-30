#pragma once
#include "CoreMinimal.h"
#include "SetPlayForceChangeIdleAction.generated.h"

UENUM()
namespace SetPlayForceChangeIdleAction {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
    };
}

