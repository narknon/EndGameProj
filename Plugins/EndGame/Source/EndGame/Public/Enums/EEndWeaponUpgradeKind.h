#pragma once
#include "CoreMinimal.h"
#include "EEndWeaponUpgradeKind.generated.h"

UENUM()
enum class EEndWeaponUpgradeKind {
    UnKnown = 0xFF,
    Core = 0x0,
    Skill,
    Upgrade,
    MaxUpgrade = 0x1,
    MaxMainCoreResource = 0x6,
    MaxSubCoreResource = 0x6,
    EEndWeaponUpgradeKind_MAX = 0x100,
};

