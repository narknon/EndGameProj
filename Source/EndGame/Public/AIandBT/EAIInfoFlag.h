#pragma once
#include "CoreMinimal.h"
#include "EAIInfoFlag.generated.h"

UENUM()
namespace EAIInfoFlag {
    enum Type {
        eCAN_MOVE,
        eCAN_TURN,
        eCAN_RUN,
        eCAN_STRAFE,
        eCAN_TURN_MOVE,
        eCAN_LOOKAT,
        eCAN_LOOKAT_MOVE,
        eCAN_LOOKAT_TURN,
        eCAN_HERMITE_MOVE,
        eCAN_MOVE_UPDATE,
        eSTOP_MOVE_UPDATE,
        eMAX,
        eCAN_FIX_MOVE = 0xB,
        eTURN_BEFORE_MOVE,
        eTURN_INTEREST,
        eMAX_DUMMY,
    };
}

