#include "EndAnimNotifyEquipmentDrawPause.h"

UEndAnimNotifyEquipmentDrawPause::UEndAnimNotifyEquipmentDrawPause() {
    this->Slot = EWeaponSlot::EWeaponSlot_1;
    this->Mask = EPauseMask::EPauseMask_DEBUG;
    this->Pause = false;
}

