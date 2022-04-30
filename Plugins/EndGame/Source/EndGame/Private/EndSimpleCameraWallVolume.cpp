#include "EndSimpleCameraWallVolume.h"

AEndSimpleCameraWallVolume::AEndSimpleCameraWallVolume() {
    this->CollisionProfileType = ESimpleCameraCollisionProfileType::GameCameraWall;
    this->TextRenderComponent = NULL;
}

