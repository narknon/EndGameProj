#pragma once
#include "CoreMinimal.h"
#include "EEndCameraHookshotStateType.generated.h"

UENUM()
enum class EEndCameraHookshotStateType {
    Enter,
    Move,
    Leave,
    MAX,
};

