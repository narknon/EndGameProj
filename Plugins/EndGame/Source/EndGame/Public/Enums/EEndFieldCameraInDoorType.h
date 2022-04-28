#pragma once
#include "CoreMinimal.h"
#include "EEndFieldCameraInDoorType.generated.h"

UENUM()
enum class EEndFieldCameraInDoorType : uint8 {
    Town,
    Narrow,
    Normal,
    Override,
};

