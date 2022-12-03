#pragma once
#include "CoreMinimal.h"
#include "EBattleAirMoveType.generated.h"

UENUM(BlueprintType)
namespace EBattleAirMoveType {
    enum Type {
        eBAM_CONFRONT,
        eBAM_CHASE,
        eBAM_POINT,
        eBAM_AROUND,
        eBAM_FUNNEL,
        eBAM_BOIDS,
        eBAM_SPLINE,
        eBAM_MAX UMETA(Hidden),
    };
}

