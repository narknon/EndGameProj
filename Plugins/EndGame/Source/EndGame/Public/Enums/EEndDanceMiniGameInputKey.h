#pragma once
#include "CoreMinimal.h"
#include "EEndDanceMiniGameInputKey.generated.h"

UENUM()
namespace EEndDanceMiniGameInputKey {
    enum Type {
        NONE = -0x1,
        CIRCLE,
        TRIANGLE,
        SQUARE,
        CROSS,
        UP,
        RIGHT,
        DOWN,
        LEFT,
    };
}

