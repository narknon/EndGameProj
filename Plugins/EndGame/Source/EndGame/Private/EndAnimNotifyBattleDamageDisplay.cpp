#include "EndAnimNotifyBattleDamageDisplay.h"

UEndAnimNotifyBattleDamageDisplay::UEndAnimNotifyBattleDamageDisplay() {
    this->DamageSourceID = TEXT("?");
    this->CreatePositionBase = EEndBattleDamageSourcePositionBaseType::Owner;
    this->OwnerFilterType = EEndAnimNotifyBattleDamageOwnerFilterType::eALL;
}

