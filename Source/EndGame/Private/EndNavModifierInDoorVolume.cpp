#include "EndNavModifierInDoorVolume.h"

AEndNavModifierInDoorVolume::AEndNavModifierInDoorVolume() {
    this->CameraType = EEndFieldCameraInDoorType::Narrow;
    this->OverridePriorityType = EEndFieldCameraInDoorPriorityType::InDoor;
    this->SpecificMoveType = EEndSpecificMoveType::Walk;
    this->DashType = EEndDashType::Enable;
}

