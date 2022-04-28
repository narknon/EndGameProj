#pragma once
#include "CoreMinimal.h"
#include "EEndMoveOrder.generated.h"

UENUM()
enum class EEndMoveOrder {
    None,
    Straight,
    LeftTurn,
    RightTurn,
};

