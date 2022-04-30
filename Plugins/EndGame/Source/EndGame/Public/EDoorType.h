#pragma once
#include "CoreMinimal.h"
#include "EDoorType.generated.h"

UENUM()
enum class EDoorType : uint8 {
    NormalDoor,
    PressDoor,
    AerithDoor,
    SeventhDoor,
    DoubleDoors,
    HandFirDoor,
    MAX,
};

