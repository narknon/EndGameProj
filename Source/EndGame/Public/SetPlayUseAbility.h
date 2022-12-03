#pragma once
#include "CoreMinimal.h"
#include "SetPlayUseAbility.generated.h"

UENUM(BlueprintType)
namespace SetPlayUseAbility {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        TimeoutError,
    };
}

