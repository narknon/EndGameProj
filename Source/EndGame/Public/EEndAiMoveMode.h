#pragma once
#include "CoreMinimal.h"
#include "EEndAiMoveMode.generated.h"

UENUM(BlueprintType)
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

