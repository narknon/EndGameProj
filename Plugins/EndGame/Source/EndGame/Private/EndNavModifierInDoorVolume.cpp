#include "EndNavModifierInDoorVolume.h"

AEndNavModifierInDoorVolume::AEndNavModifierInDoorVolume() {
    this->CameraType = EEndFieldCameraInDoorType::Town;
    this->OverridePriorityType = EEndFieldCameraInDoorPriorityType::Town;
    this->SpecificMoveType = EEndSpecificMoveType::Walk;
    this->DashType = EEndDashType::Enable;
}

