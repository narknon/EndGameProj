#include "EndAnimNotifyBattleAbilityRushWeapon.h"

UEndAnimNotifyBattleAbilityRushWeapon::UEndAnimNotifyBattleAbilityRushWeapon() {
    this->RushGroundWeaponOffsetZ = 0.00f;
    this->RushTime = 0.00f;
    this->RushCalcDamageCoefficient = 1.00f;
    this->RushCactuarWeaponPitch = 0.00f;
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve01;
    this->Duration = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
}

