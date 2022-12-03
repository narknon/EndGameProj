#pragma once
#include "CoreMinimal.h"
#include "EEndMovementModeLayer.generated.h"

UENUM(BlueprintType)
enum class EEndMovementModeLayer : uint8 {
    EEndMovementModeLayer_Debug = 0xC000,
    EEndMovementModeLayer_Interrupt = 0xB000,
    EEndMovementModeLayer_Cinema = 0xA000,
    EEndMovementModeLayer_Loading = 0x9000,
    EEndMovementModeLayer_BattleSyncAction = 0x8000,
    EEndMovementModeLayer_Battle = 0x7000,
    EEndMovementModeLayer_Animation = 0x6000,
    EEndMovementModeLayer_Battle_Low = 0x5000,
    EEndMovementModeLayer_Notify = 0x4000,
    EEndMovementModeLayer_Field = 0x3000,
    EEndMovementModeLayer_Temporary = 0x2000,
    EEndMovementModeLayer_FlyThroughWall = 0x1000,
    EEndMovementModeLayer_Normal = 0x0,
    EEndMovementModeLayer_MAX = 0xC001,
};

