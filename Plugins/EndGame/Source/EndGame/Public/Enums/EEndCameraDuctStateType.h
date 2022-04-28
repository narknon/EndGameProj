#pragma once
#include "CoreMinimal.h"
#include "EEndCameraDuctStateType.generated.h"

UENUM()
enum class EEndCameraDuctStateType {
    RotateIn,
    Enter,
    Move,
    Leave,
    LerpArmLength,
    MAX,
};

