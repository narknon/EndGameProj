#pragma once
#include "CoreMinimal.h"
#include "EEndBattleEasySpawnEnableRagdollType.generated.h"

UENUM()
enum class EEndBattleEasySpawnEnableRagdollType : uint8 {
    Deaded,
    Spawned,
    MovedToSocket,
    None,
};

