#include "EndNavModifierInDoorVolume.h"

AEndNavModifierInDoorVolume::AEndNavModifierInDoorVolume(const FObjectInitializer& ObjectInitializer) : AEndNavModifierVolumeBase(ObjectInitializer){
    this->CameraType = EEndFieldCameraInDoorType::Town;
    this->OverridePriorityType = EEndFieldCameraInDoorPriorityType::Town;
    this->SpecificMoveType = EEndSpecificMoveType::Walk;
    this->DashType = EEndDashType::Enable;
}

