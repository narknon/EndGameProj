#pragma once
#include "CoreMinimal.h"
#include "EEndAnimWalkType.generated.h"

UENUM(Blueprintable)
enum class EEndAnimWalkType : uint8 {
    Idle,
    Walk,
    Run,
    Dash,
    Extra,
};

