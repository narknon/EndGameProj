#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADSoundState.generated.h"

UENUM()
enum class ESQEXSEADSoundState {
    Invalid,
    Ready,
    Playing,
    Paused,
    Unknown,
};

