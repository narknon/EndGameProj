#pragma once
#include "CoreMinimal.h"
#include "EEndWeaponUpgradeKind.generated.h"

UENUM(BlueprintType)
enum class EEndWeaponUpgradeKind : uint8 {
    UnKnown,
    Core,
    Skill,
    Upgrade,
    MaxUpgrade,
    MaxMainCoreResource,
    MaxSubCoreResource,
    EEndWeaponUpgradeKind_MAX,
};

