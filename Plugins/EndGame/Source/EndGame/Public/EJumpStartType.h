#pragma once
#include "CoreMinimal.h"
#include "EJumpStartType.generated.h"

UENUM()
enum class EJumpStartType : uint8 {
    FixCoordinates,
    FixDirectionEnterToExit,
    FixDirectionExitToEnter,
    FixDirection,
};

