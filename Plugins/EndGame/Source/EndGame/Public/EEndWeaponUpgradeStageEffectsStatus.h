#pragma once
#include "CoreMinimal.h"
#include "EEndWeaponUpgradeStageEffectsStatus.generated.h"

UENUM()
enum class EEndWeaponUpgradeStageEffectsStatus {
    None,
    PlayStage,
    WaitCameraMove,
    WaitSpawn,
    WaitActive,
    WaitStage,
    Done,
};

