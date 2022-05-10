#include "EndAnimNotifyStateBattleDamage.h"

UEndAnimNotifyStateBattleDamage::UEndAnimNotifyStateBattleDamage() {
    this->DamageSourceID = TEXT("?");
    this->Probability = 100;
    this->CreatePositionBase = EEndBattleDamageSourcePositionBaseType::Owner;
    this->OwnerFilterType = EEndAnimNotifyBattleDamageOwnerFilterType::eALL;
}

