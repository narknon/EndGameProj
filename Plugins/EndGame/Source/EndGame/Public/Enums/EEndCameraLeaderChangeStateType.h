#pragma once
#include "CoreMinimal.h"
#include "EEndCameraLeaderChangeStateType.generated.h"

UENUM()
enum class EEndCameraLeaderChangeStateType {
    Leave,
    Round,
    MAX,
};

