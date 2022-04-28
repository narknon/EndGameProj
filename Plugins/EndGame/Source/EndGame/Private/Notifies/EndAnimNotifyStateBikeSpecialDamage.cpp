#include "EndAnimNotifyStateBikeSpecialDamage.h"

UEndAnimNotifyStateBikeSpecialDamage::UEndAnimNotifyStateBikeSpecialDamage() {
    this->DamageSourceID = TEXT("?");
    this->CreatePositionBase = EEndBattleDamageSourcePositionBaseType::Owner;
    this->Parameter = 0;
}

