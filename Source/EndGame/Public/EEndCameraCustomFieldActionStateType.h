#pragma once
#include "CoreMinimal.h"
#include "EEndCameraCustomFieldActionStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraCustomFieldActionStateType : uint8 {
    Enter,
    Move,
    Leave,
    LerpArmLength,
    MAX,
};

