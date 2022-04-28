#pragma once
#include "CoreMinimal.h"
#include "EEndWireReelState.generated.h"

UENUM()
enum class EEndWireReelState : uint8 {
    Idle,
    Launch,
    Keeping,
    Release,
};

