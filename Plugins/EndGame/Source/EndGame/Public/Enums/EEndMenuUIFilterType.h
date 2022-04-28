#pragma once
#include "CoreMinimal.h"
#include "EEndMenuUIFilterType.generated.h"

UENUM()
enum class EEndMenuUIFilterType : uint8 {
    WaitMode,
    Dying,
    MainMenu,
    MainMenuParticle,
    MainMenuFade,
    MainMenuMono,
    FilterMax,
};

