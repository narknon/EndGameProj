#pragma once
#include "CoreMinimal.h"
#include "EEndFieldCameraOperatorFlavorType.generated.h"

UENUM()
enum class EEndFieldCameraOperatorFlavorType : uint8 {
    Corner,
    Slope,
    MoveFollow,
    SpaceOffset,
    TargetLength,
    TargetOffset,
    CutConnect,
    ResetTurnBack,
    Reset,
    ActionFollow,
    ActionFollowField,
    ConnectSyncAction,
    BarretShootingAction,
    Command,
    PostStateLock,
    Ladder,
    Hookshot,
    Duct,
    Rope,
    Peek,
    CustomizableFieldAction,
    NotifyOverride,
    Scan,
    LookAtTurnBack,
    LookAt,
    Override,
    FadeLeaderChange,
    PersonalLeaderChange,
    LeaderChange,
    MAX,
};

