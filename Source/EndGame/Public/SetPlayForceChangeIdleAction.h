#pragma once
#include "CoreMinimal.h"
#include "SetPlayForceChangeIdleAction.generated.h"

UENUM(BlueprintType)
namespace SetPlayForceChangeIdleAction {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
    };
}

