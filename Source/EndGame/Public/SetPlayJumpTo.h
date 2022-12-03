#pragma once
#include "CoreMinimal.h"
#include "SetPlayJumpTo.generated.h"

UENUM(BlueprintType)
namespace SetPlayJumpTo {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
    };
}

