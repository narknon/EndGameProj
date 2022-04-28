#pragma once
#include "CoreMinimal.h"
#include "EBattleMoveType.generated.h"

UENUM()
namespace EBattleMoveType {
    enum Type {
        eBM_NONE,
        eBM_CONFRONT,
        eBM_CONFRONT_AIPC,
        eBM_CONFRONT_AIPC_RUN,
        eBM_ABILITY,
        eBM_APPROACH,
        eBM_LEAVE,
        eBM_LEAVE_RUN,
        eBM_AROUND_L,
        eBM_AROUND_R,
        eBM_PARTY,
        eBM_TO_SAFE_AREA,
        eBM_STAY,
        eBM_AVOID_DANGER,
        eBM_FLEE,
        eBM_HOME_POSITION,
        eBM_HOME_WANDERING,
        eBM_ACTOR_CHASE,
        eBM_SPLINE,
        eBM_SEARCH,
        eBM_ESCAPE,
        eBM_MAX UMETA(Hidden),
    };
}

