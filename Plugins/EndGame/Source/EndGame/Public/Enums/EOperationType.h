#pragma once
#include "CoreMinimal.h"
#include "EOperationType.generated.h"

UENUM()
enum class EOperationType : uint8 {
    DownButton,
    WallButton,
    KeyBoard,
    Elevator,
    MAX,
};

