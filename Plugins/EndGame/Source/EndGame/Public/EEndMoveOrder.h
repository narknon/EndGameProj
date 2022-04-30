#pragma once
#include "CoreMinimal.h"
#include "EEndMoveOrder.generated.h"

UENUM()
enum class EEndMoveOrder : int8 {
    None,
    Straight,
    LeftTurn,
    RightTurn,
};

