#include "EndAnimNotifyStateBikeDamage.h"

UEndAnimNotifyStateBikeDamage::UEndAnimNotifyStateBikeDamage() {
    this->DamageSourceID = TEXT("?");
    this->CreatePositionBase = EEndBattleDamageSourcePositionBaseType::Owner;
}

