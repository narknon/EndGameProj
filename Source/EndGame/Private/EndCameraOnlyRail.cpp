#include "EndCameraOnlyRail.h"

AEndCameraOnlyRail::AEndCameraOnlyRail() {
    this->AimOffset = 0.00f;
    this->CameraOffset = 0.00f;
    this->CurrentCameraWeight = 0.00f;
    this->ShowCameraPosition = false;
    this->StartPointMargin = 0.10f;
    this->EndPointMargin = 0.10f;
    this->CameraMoveThreshold = 300.00f;
    this->UseCollisionCheck = true;
    this->UseForceConnect = false;
    this->StopControl = false;
    this->StartEndPointOnly = false;
    this->BoostAimFollow = false;
    this->ForceCutBlend = false;
}

