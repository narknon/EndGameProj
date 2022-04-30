#pragma once
#include "CoreMinimal.h"
#include "EEndMenuIconKind.generated.h"

UENUM()
enum class EEndMenuIconKind : uint8 {
    None,
    Item,
    KeyItem,
    WeaponCloud,
    WeaponBarret,
    WeaponTifa,
    WeaponAerith,
    Bangle,
    Accessory,
    Materia,
    Resource,
    KnockOut,
    Defeat,
    LevelUpMateria,
    UpgradeWeaponCloud,
    UpgradeWeaponBarret,
    UpgradeWeaponTifa,
    UpgradeWeaponAerith,
    BattleReport,
    WeaponYuffie,
    WeaponSonon,
    UpgradeWeaponYuffie,
    UpgradeWeaponSonon,
};

