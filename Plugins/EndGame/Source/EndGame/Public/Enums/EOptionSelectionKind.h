#pragma once
#include "CoreMinimal.h"
#include "EOptionSelectionKind.generated.h"

UENUM()
enum class EOptionSelectionKind {
    List,
    Range,
    Gamepad,
    Keyboard,
};

