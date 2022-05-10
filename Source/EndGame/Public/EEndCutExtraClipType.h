#pragma once
#include "CoreMinimal.h"
#include "EEndCutExtraClipType.generated.h"

UENUM()
namespace EEndCutExtraClipType {
    enum Type {
        SendStateTrigger = 0x1,
        ChangeEnvironment,
        ResetPhysics,
        SetStoryFlag,
        SetBeamTarget,
        EffectOfSummon,
        DetachForBattleAI,
        IntoVRColosseum,
    };
}

