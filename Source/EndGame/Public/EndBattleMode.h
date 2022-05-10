#pragma once
#include "CoreMinimal.h"
#include "EndBattleMode.generated.h"

UENUM()
enum class EndBattleMode {
    EndBattleMode_Normal,
    EndBattleMode_Warning,
    EndBattleMode_Aggressive,
    EndBattleMode_Max,
};

