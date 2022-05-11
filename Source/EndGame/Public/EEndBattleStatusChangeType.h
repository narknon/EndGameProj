#pragma once
#include "CoreMinimal.h"
#include "EEndBattleStatusChangeType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleStatusChangeType : uint8 {
    None,
    BuffStart,
    Regene,
    Barrier,
    MagicBarrier,
    Reflect,
    Shield,
    Haste,
    Resist,
    Peerless,
    Reraise,
    BuffEnd,
    DebuffStart,
    Poison,
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
    CF_Start,
    CF_Barrier,
    CF_Haste,
    CF_Slow,
    CF_Stop,
    CF_End,
};

