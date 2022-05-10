#pragma once
#include "CoreMinimal.h"
#include "EndBattleExitBattleSceneType.generated.h"

UENUM()
enum class EndBattleExitBattleSceneType : uint8 {
    EndBattleMode_Finish,
    EndBattleMode_Escape,
    EndBattleMode_Leave,
    EndBattleMode_Max,
};

