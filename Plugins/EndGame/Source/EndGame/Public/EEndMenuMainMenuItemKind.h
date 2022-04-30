#pragma once
#include "CoreMinimal.h"
#include "EEndMenuMainMenuItemKind.generated.h"

UENUM()
enum class EEndMenuMainMenuItemKind {
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

