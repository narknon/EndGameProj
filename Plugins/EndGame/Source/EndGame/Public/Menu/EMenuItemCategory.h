#pragma once
#include "CoreMinimal.h"
#include "EMenuItemCategory.generated.h"

UENUM(Blueprintable)
enum class EMenuItemCategory : uint8 {
    GamePlay,
    CameraController,
    Sound,
    Language,
    Graphics,
    Gamepad,
    Keyboard,
};

