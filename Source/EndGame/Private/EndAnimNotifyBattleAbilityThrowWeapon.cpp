#include "EndAnimNotifyBattleAbilityThrowWeapon.h"

UEndAnimNotifyBattleAbilityThrowWeapon::UEndAnimNotifyBattleAbilityThrowWeapon() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve01;
    this->Duration = 1.00f;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
}

