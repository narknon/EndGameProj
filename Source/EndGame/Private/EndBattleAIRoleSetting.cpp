#include "EndBattleAIRoleSetting.h"

FEndBattleAIRoleSetting::FEndBattleAIRoleSetting() {
    this->OverrideRole = EEndAiBattleRole::None;
    this->OverrideInMin = 0.00f;
    this->OverrideInMax = 0.00f;
    this->OverrideOutMin = 0.00f;
    this->OverrideOutMax = 0.00f;
}

