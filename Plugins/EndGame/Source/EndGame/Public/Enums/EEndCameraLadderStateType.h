#pragma once
#include "CoreMinimal.h"
#include "EEndCameraLadderStateType.generated.h"

UENUM()
enum class EEndCameraLadderStateType {
    Enter,
    Move,
    Leave,
    MAX,
};

