#pragma once
#include "CoreMinimal.h"
#include "SetPlayGraviticJump.generated.h"

UENUM()
namespace SetPlayGraviticJump {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        SuspendedError,
    };
}

