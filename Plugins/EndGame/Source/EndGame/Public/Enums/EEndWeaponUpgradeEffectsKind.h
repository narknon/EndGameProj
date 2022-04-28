#pragma once
#include "CoreMinimal.h"
#include "EEndWeaponUpgradeEffectsKind.generated.h"

UENUM()
enum class EEndWeaponUpgradeEffectsKind {
    None,
    BeginMenu,
    FadeInFadeOut,
    SpawnCore,
    ActivationSkill,
    Root,
    StartMenu,
    EndMenu,
    Cursor,
    Max,
};

