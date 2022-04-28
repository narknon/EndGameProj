#include "EndAnimNotifyStateBikeLaserPointer.h"

UEndAnimNotifyStateBikeLaserPointer::UEndAnimNotifyStateBikeLaserPointer() {
    this->ID = 0;
    this->EffectResourceCategory = EEndBikeLaserPointerEffectResourceCategory::Resident;
    this->EffectResourceName = TEXT("FX_EN1008_Search_Laser_01");
    this->HomingDelayTime = 1;
    this->HomingSpeed = 1;
    this->FromCharacterType = EEndBikeLaserPointerCharacterType::Vehicle;
    this->FromSocketName = TEXT("C_Gun_Muzzle");
    this->TargetCharacterType = EEndBikeLaserPointerCharacterType::Vehicle;
    this->TargetSocketName = TEXT("C_Spine_d");
}

