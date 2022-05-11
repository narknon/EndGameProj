#pragma once
#include "CoreMinimal.h"
#include "ESummonPointUsageFlag.generated.h"

UENUM(BlueprintType)
enum class ESummonPointUsageFlag : uint8 {
    eSpawn_All,
    eSpawn_Ifrit,
    eSpawn_Chocobo,
    eSpawn_Shiva,
    eSpawn_Leviathan,
    eSpawn_Bahamut,
    eSpawn_DebuChoco,
    eSpawn_Carbuncle,
    eSpawn_Cactuar,
    eSpawn_Hinachocobo,
    eSpawn_Ramuh,
    eWarp_Ifrit,
    eWarp_Chocobo,
    eWarp_Shiva,
    eWarp_Leviathan,
    eWarp_Bahamut,
    eWarp_DebuChoco,
    eWarp_Carbuncle,
    eWarp_Cactuar,
    eWarp_Hinachocobo,
    eWarp_Ramuh,
    eOmen,
    eCutScene,
    eResetLocation,
    ebLevelCutScene,
    eMax,
};

