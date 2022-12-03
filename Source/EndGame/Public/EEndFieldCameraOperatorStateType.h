#pragma once
#include "CoreMinimal.h"
#include "EEndFieldCameraOperatorStateType.generated.h"

UENUM(BlueprintType)
enum class EEndFieldCameraOperatorStateType : uint8 {
    Free,
    Lock,
    MAX,
};

