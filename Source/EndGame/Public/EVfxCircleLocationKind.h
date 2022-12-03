#pragma once
#include "CoreMinimal.h"
#include "EVfxCircleLocationKind.generated.h"

UENUM(BlueprintType)
enum class EVfxCircleLocationKind : uint8 {
    XZ,
    XY,
    YZ,
};

