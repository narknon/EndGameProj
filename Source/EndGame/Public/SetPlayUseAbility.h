#pragma once
#include "CoreMinimal.h"
#include "SetPlayUseAbility.generated.h"

UENUM()
namespace SetPlayUseAbility {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        TimeoutError,
    };
}

