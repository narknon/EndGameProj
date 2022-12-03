#pragma once
#include "CoreMinimal.h"
#include "EEndMovieClipMode.generated.h"

UENUM(BlueprintType)
enum class EEndMovieClipMode : uint8 {
    Load = 0x1,
    Play,
    Draw,
};

