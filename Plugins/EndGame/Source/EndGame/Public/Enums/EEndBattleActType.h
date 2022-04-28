#pragma once
#include "CoreMinimal.h"
#include "EEndBattleActType.generated.h"

UENUM()
enum class EEndBattleActType {
    Move,
    Moves,
    Turn,
    Warp,
    Motion,
    MotionEnd,
    ActMax,
};

