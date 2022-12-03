#pragma once
#include "CoreMinimal.h"
#include "EEndCutExtraClipType.generated.h"

UENUM(BlueprintType)
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

