#pragma once
#include "CoreMinimal.h"
#include "EFieldAiPathWayType.generated.h"

UENUM()
enum class EFieldAiPathWayType : uint8 {
    None,
    Center,
    Right,
    Left,
    Max,
};

