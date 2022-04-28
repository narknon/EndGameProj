#pragma once
#include "CoreMinimal.h"
#include "EBattleAbilityRotateNotifyState.generated.h"

UENUM(BlueprintType)
namespace EBattleAbilityRotateNotifyState {
    enum Type {
        None,
        Swing,
        Rotate,
        UcpcSwing,
        UcpcRotate,
        TargetSwing,
        TargetRotate,
        TargetPointName,
        TargetLocate,
    };
}

