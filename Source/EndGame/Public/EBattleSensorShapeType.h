#pragma once
#include "CoreMinimal.h"
#include "EBattleSensorShapeType.generated.h"

UENUM(BlueprintType)
enum class EBattleSensorShapeType : uint8 {
    None,
    Fan,
    Circle,
};

