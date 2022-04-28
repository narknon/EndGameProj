#pragma once
#include "CoreMinimal.h"
#include "EEndBattleSummonType.generated.h"

UENUM()
enum class EEndBattleSummonType : uint8 {
    Ifrit,
    Chocobo,
    Shiva,
    DebuChocobo,
    Leviathan,
    Bahamut,
    Carbuncle = 0xC,
    Cactuar,
    Hinachocobo,
    Ramuh,
    None = 0x1F,
};

