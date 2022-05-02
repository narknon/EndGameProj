#pragma once
#include "CoreMinimal.h"
#include "EBattleAIInfoParam.generated.h"

UENUM()
namespace EBattleAIInfoParam {
    enum Type {
        ePositionAngle,
        eLeaveRunDelay,
        eLookChangeDistance,
        eLookChangeYaw,
        eLookChangePitch,
        eLookChangeDelayTime,
        eMoveThreshold,
        eMAX,
    };
}

