#include "EndCameraOnlyRail.h"

AEndCameraOnlyRail::AEndCameraOnlyRail() {
    this->AimOffset = 1;
    this->CameraOffset = 1;
    this->CurrentCameraWeight = 1;
    this->ShowCameraPosition = false;
    this->StartPointMargin = 1;
    this->EndPointMargin = 1;
    this->CameraMoveThreshold = 1;
    this->UseCollisionCheck = true;
    this->UseForceConnect = false;
    this->StopControl = false;
    this->StartEndPointOnly = false;
    this->BoostAimFollow = false;
    this->ForceCutBlend = false;
}

