#pragma once
#include "CoreMinimal.h"
#include "EEndCameraDuctStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraDuctStateType : uint8 {
    RotateIn,
    Enter,
    Move,
    Leave,
    LerpArmLength,
    MAX,
};

