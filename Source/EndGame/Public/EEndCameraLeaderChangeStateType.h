#pragma once
#include "CoreMinimal.h"
#include "EEndCameraLeaderChangeStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraLeaderChangeStateType : uint8 {
    Leave,
    Round,
    MAX,
};

