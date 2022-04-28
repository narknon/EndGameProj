#pragma once
#include "CoreMinimal.h"
#include "EEndMovieClipMode.generated.h"

UENUM()
enum class EEndMovieClipMode {
    Load = 0x1,
    Play,
    Draw,
};

