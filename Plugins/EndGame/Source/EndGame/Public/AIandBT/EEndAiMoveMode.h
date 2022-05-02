#pragma once
#include "CoreMinimal.h"
#include "EEndAiMoveMode.generated.h"

UENUM()
namespace EEndAiMoveMode {
    enum Type {
        FollowLocation,
        Ground,
        Fly,
        Landing,
        Other,
        Jump,
        EndJump,
    };
}

