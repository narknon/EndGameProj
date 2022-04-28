#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSummonTrigger.generated.h"

UENUM()
enum class EEndBattleSummonTrigger {
    BurstChance,
    Burst,
    BurstHit,
    DyingDamageTaken,
    MemberDie,
    BluePrintEvent,
    Debug,
};

