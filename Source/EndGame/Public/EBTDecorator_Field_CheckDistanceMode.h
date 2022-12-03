#pragma once
#include "CoreMinimal.h"
#include "EBTDecorator_Field_CheckDistanceMode.generated.h"

UENUM(BlueprintType)
enum class EBTDecorator_Field_CheckDistanceMode : uint8 {
    Distance3D,
    Distance2D,
    DistanceZ,
    DistanceZ_Abs,
    EBTDecorator_Field_MAX UMETA(Hidden),
};

