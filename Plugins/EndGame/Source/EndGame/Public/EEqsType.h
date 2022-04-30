#pragma once
#include "CoreMinimal.h"
#include "EEqsType.generated.h"

UENUM()
namespace EEqsType {
    enum Type {
        CommonEnemyTarget,
        CoverPcRectangle,
        CoverEnemyRectangle,
        CautionInflenceMap,
        Confront,
        Escort,
        Avoid_Danger,
        Avoid_Damage,
        Flee,
        Target_Evaluate,
        Summon_Entry,
        Summon_Confront,
        Summon_Ability,
        Summon_Approach,
        Summon_Beside,
        Chase,
        Chocobo_Rage,
        Max,
    };
}

