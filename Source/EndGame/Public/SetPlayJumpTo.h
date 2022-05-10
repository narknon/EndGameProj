#pragma once
#include "CoreMinimal.h"
#include "SetPlayJumpTo.generated.h"

UENUM()
namespace SetPlayJumpTo {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
    };
}

