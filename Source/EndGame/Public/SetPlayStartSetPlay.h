#pragma once
#include "CoreMinimal.h"
#include "SetPlayStartSetPlay.generated.h"

UENUM()
namespace SetPlayStartSetPlay {
    enum Type {
        Succeeded,
        SomeoneFrogError,
        SomeoneDeadError,
        RuntimeError,
    };
}

