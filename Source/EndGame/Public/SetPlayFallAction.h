#pragma once
#include "CoreMinimal.h"
#include "SetPlayFallAction.generated.h"

UENUM(BlueprintType)
namespace SetPlayFallAction {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        SuspendedError,
    };
}

