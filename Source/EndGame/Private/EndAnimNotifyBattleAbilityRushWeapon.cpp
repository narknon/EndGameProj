#include "EndAnimNotifyBattleAbilityRushWeapon.h"

UEndAnimNotifyBattleAbilityRushWeapon::UEndAnimNotifyBattleAbilityRushWeapon() {
    this->RushGroundWeaponOffsetZ = 1;
    this->RushTime = 1;
    this->RushCalcDamageCoefficient = 1;
    this->RushCactuarWeaponPitch = 1;
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve00;
    this->Duration = 1;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
}

