#pragma once
#include "CoreMinimal.h"
#include "EBattleAIInfoParam.generated.h"

UENUM(BlueprintType)
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

