#pragma once
#include "CoreMinimal.h"
#include "EEndMenuKeyGuideMode.generated.h"

UENUM()
enum class EEndMenuKeyGuideMode {
    Gamepad,
    Keyboard,
    Gamepad_XInput,
    Gamepad_DirectInput,
};

