#pragma once
#include "CoreMinimal.h"
#include "EGameSpeed.generated.h"

UENUM()
enum class EGameSpeed : uint8 {
    EGameSpeed_SYSTEM,
    EGameSpeed_BATTLE,
    EGameSpeed_BATTLE_COMMAND,
    EGameSpeed_BATTLE_PARTY_CHANGE,
    EGameSpeed_BATTLE_FINISH,
    EGameSpeed_BATTLE_VISION,
    EGameSpeed_BATTLE_LIMITE,
    EGameSpeed_BATTLE_HIT,
    EGameSpeed_BATTLE_BURST,
    EGameSpeed_CUT,
    EGameSpeed_DEBUG,
    EGamePause_MAX UMETA(Hidden),
};

