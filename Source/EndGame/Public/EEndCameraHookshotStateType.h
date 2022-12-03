#pragma once
#include "CoreMinimal.h"
#include "EEndCameraHookshotStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraHookshotStateType : uint8 {
    Enter,
    Move,
    Leave,
    MAX,
};

