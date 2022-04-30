#pragma once
#include "CoreMinimal.h"
#include "ESimpleCameraCollisionProfileType.generated.h"

UENUM()
enum class ESimpleCameraCollisionProfileType : uint8 {
    GameCameraWall,
    CameraHitOnly,
    GameCameraSeeThroughWall,
};

