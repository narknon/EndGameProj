#pragma once
#include "CoreMinimal.h"
#include "EEndMenuMainMenuItemKind.generated.h"

UENUM(BlueprintType)
enum class EEndMenuMainMenuItemKind : uint8 {
    MateriaEquip,
    WeaponUpgrade,
    BattleSettings,
    BattleReport,
    EnemyReport,
    Magic,
    Item,
    Status,
    Manual,
    SaveLoad,
    AdditionalEpisode,
    System,
    TrialSpecial,
};

