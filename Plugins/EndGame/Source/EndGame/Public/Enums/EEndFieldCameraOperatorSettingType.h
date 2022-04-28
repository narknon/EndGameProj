#pragma once
#include "CoreMinimal.h"
#include "EEndFieldCameraOperatorSettingType.generated.h"

UENUM()
enum class EEndFieldCameraOperatorSettingType {
    Default,
    Town,
    InDoor,
    Override,
    Battle,
    MAX,
};

