#pragma once
#include "CoreMinimal.h"
#include "EEndMovementModeLayer.generated.h"

UENUM(BlueprintType)
enum class EEndMovementModeLayer : uint8 {
    EEndMovementModeLayer_Debug,
    EEndMovementModeLayer_Interrupt,
    EEndMovementModeLayer_Cinema,
    EEndMovementModeLayer_Loading,
    EEndMovementModeLayer_BattleSyncAction,
    EEndMovementModeLayer_Battle,
    EEndMovementModeLayer_Animation,
    EEndMovementModeLayer_Battle_Low,
    EEndMovementModeLayer_Notify,
    EEndMovementModeLayer_Field,
    EEndMovementModeLayer_Temporary,
    EEndMovementModeLayer_FlyThroughWall,
    EEndMovementModeLayer_Normal,
    EEndMovementModeLayer_MAX,
};

