#pragma once
#include "CoreMinimal.h"
#include "EBattleAIInfoFlag.generated.h"

UENUM(BlueprintType)
namespace EBattleAIInfoFlag {
    enum Type {
        eCanWall,
        eCanCeil,
        eCanPositionAngle,
        eLookAtOther,
        eBlockOrder,
        eBlockRequest,
        eAccept,
        eLookAtActionTarget,
        eCanDodge,
        eCanFear,
        eMAX,
    };
}

