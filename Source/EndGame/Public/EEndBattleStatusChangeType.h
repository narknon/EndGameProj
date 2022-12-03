#pragma once
#include "CoreMinimal.h"
#include "EEndBattleStatusChangeType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleStatusChangeType : uint8 {
    None,
    BuffStart,
    Regene = 0x1,
    Barrier,
    MagicBarrier,
    Reflect,
    Shield,
    Haste,
    Resist,
    Peerless,
    Reraise,
    BuffEnd,
    DebuffStart = 0x32,
    Poison = 0x32,
    Fury,
    Sadness,
    Silence,
    Sleep,
    Slow,
    Stop,
    Petrify,
    Berserk,
    Frog,
    DeathSentence,
    Death,
    BerserkAlways,
    FrogAlways,
    DebuffEnd,
    CF_Start = 0x64,
    CF_Barrier = 0x64,
    CF_Haste,
    CF_Slow,
    CF_Stop,
    CF_End = 0x67,
};

