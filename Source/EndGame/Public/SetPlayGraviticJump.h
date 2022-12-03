#pragma once
#include "CoreMinimal.h"
#include "SetPlayGraviticJump.generated.h"

UENUM(BlueprintType)
namespace SetPlayGraviticJump {
    enum Type {
        Succeeded,
        ParameterError,
        RuntimeError,
        SuspendedError,
    };
}

