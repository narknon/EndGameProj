#pragma once
#include "CoreMinimal.h"
#include "EBattleAIInfoString.generated.h"

UENUM()
namespace EBattleAIInfoString {
    enum Type {
        eDodgeMotion,
        eFearMotion,
        eTriggerAction0,
        eOccurAction0,
        eTriggerAction1,
        eOccurAction1,
        eTriggerAction2,
        eOccurAction2,
        eTriggerAction3,
        eOccurAction3,
        eDodgeMotionL,
        eDodgeMotionR,
        eMAX,
    };
}

