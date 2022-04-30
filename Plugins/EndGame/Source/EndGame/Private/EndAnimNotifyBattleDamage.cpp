#include "EndAnimNotifyBattleDamage.h"

UEndAnimNotifyBattleDamage::UEndAnimNotifyBattleDamage() {
    this->DamageSourceID = TEXT("?");
    this->CreatePositionBase = EEndBattleDamageSourcePositionBaseType::Owner;
    this->OwnerFilterType = EEndAnimNotifyBattleDamageOwnerFilterType::eALL;
}

