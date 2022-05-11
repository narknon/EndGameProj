#pragma once
#include "CoreMinimal.h"
#include "EOperationType.generated.h"

UENUM(BlueprintType)
enum class EOperationType : uint8 {
    DownButton,
    WallButton,
    KeyBoard,
    Elevator,
    MAX,
};

