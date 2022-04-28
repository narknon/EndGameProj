#include "EndAnimNotifyBattleAbilityThrowWeapon.h"

UEndAnimNotifyBattleAbilityThrowWeapon::UEndAnimNotifyBattleAbilityThrowWeapon() {
    this->Modifier = EEndEmissiveModifierType::Overlay;
    this->Curve = EEndEmissiveCurveType::Curve00;
    this->Duration = 1;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
}

