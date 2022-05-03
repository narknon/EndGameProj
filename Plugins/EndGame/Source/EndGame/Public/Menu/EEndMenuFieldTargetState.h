#pragma once
#include "CoreMinimal.h"
#include "EEndMenuFieldTargetState.generated.h"

UENUM(Blueprintable)
enum class EEndMenuFieldTargetState : uint8 {
    None,
    On,
    On2,
    Off,
    NG,
    Hold,
};

