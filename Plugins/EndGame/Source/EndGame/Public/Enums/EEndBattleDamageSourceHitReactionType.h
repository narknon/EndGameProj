#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourceHitReactionType.generated.h"

UENUM()
enum class EEndBattleDamageSourceHitReactionType : uint8 {
    None = 0x2,
    Small = 0x0,
    Medium = 0x8,
    Large = 0x1,
    LaunchSmall = 0x3,
    LaunchLarge = 0x9,
    BlowSmall = 0x4,
    BlowLarge = 0xA,
    Strike = 0x5,
    SyncAction,
    Motion,
    Add = 0xB,
    Repel,
    AerialDeadLaunchLarge,
    AerialDeadBlowLarge,
    AerialDeadStrike,
    AerialSuspendActionLaunchLarge,
    BurstPushBlowLarge,
    Max,
};

