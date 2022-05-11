#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourceHitReactionType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleDamageSourceHitReactionType : uint8 {
    None,
    Small,
    Medium,
    Large,
    LaunchSmall,
    LaunchLarge,
    BlowSmall,
    BlowLarge,
    Strike,
    SyncAction,
    Motion,
    Add,
    Repel,
    AerialDeadLaunchLarge,
    AerialDeadBlowLarge,
    AerialDeadStrike,
    AerialSuspendActionLaunchLarge,
    BurstPushBlowLarge,
    Max,
};

