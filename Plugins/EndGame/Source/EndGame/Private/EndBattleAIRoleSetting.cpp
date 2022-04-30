#include "EndBattleAIRoleSetting.h"

FEndBattleAIRoleSetting::FEndBattleAIRoleSetting() {
    this->OverrideRole = EEndAiBattleRole::None;
    this->OverrideInMin = 1;
    this->OverrideInMax = 1;
    this->OverrideOutMin = 1;
    this->OverrideOutMax = 1;
}

