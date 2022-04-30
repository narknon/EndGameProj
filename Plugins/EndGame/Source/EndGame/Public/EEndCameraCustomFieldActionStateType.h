#pragma once
#include "CoreMinimal.h"
#include "EEndCameraCustomFieldActionStateType.generated.h"

UENUM()
enum class EEndCameraCustomFieldActionStateType {
    Enter,
    Move,
    Leave,
    LerpArmLength,
    MAX,
};

