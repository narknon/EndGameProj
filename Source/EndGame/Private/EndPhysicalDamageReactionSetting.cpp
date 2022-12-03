#include "EndPhysicalDamageReactionSetting.h"

FEndPhysicalDamageReactionSetting::FEndPhysicalDamageReactionSetting() {
    this->ConstraintSetting = NULL;
    this->ActiveTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bAlwaysReset = false;
    this->bHitDirection2D = false;
    this->bDisableOnExtraAction = false;
}

