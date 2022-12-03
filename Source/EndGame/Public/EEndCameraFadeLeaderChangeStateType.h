#pragma once
#include "CoreMinimal.h"
#include "EEndCameraFadeLeaderChangeStateType.generated.h"

UENUM(BlueprintType)
enum class EEndCameraFadeLeaderChangeStateType : uint8 {
    Enter,
    Leave,
    MAX,
};

