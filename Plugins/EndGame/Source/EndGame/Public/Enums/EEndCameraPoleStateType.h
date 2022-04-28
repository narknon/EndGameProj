#pragma once
#include "CoreMinimal.h"
#include "EEndCameraPoleStateType.generated.h"

UENUM()
enum class EEndCameraPoleStateType {
    BlendIn,
    Move,
    BlendOut,
    WaitForRotation,
    MAX,
};

