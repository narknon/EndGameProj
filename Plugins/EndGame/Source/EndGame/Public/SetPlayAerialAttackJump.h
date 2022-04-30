#pragma once
#include "CoreMinimal.h"
#include "SetPlayAerialAttackJump.generated.h"

UENUM()
namespace SetPlayAerialAttackJump {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        TimeoutError,
    };
}

