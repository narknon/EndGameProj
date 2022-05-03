#pragma once
#include "CoreMinimal.h"
#include "EEndCameraPoleStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraPoleStateType : uint8 {
    BlendIn,
    Move,
    BlendOut,
    WaitForRotation,
    MAX,
};

