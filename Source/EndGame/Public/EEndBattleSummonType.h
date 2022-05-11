#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSummonType.generated.h"

UENUM(BlueprintType)
enum class EEndBattleSummonType : uint8 {
    Ifrit,
    Chocobo,
    Shiva,
    DebuChocobo,
    Leviathan,
    Bahamut,
    Carbuncle,
    Cactuar,
    Hinachocobo,
    Ramuh,
    None,
};

