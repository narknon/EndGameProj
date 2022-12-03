#pragma once
#include "CoreMinimal.h"
#include "EEndFieldCameraOperatorSettingType.generated.h"

UENUM(BlueprintType)
enum class EEndFieldCameraOperatorSettingType : uint8 {
    Default,
    Town,
    InDoor,
    Override,
    Battle,
    MAX,
};

