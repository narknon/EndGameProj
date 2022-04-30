#pragma once
#include "CoreMinimal.h"
#include "SetPlayFallAction.generated.h"

UENUM()
namespace SetPlayFallAction {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        SuspendedError,
    };
}

