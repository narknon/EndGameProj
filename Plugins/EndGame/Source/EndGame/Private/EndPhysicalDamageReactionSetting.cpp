#include "EndPhysicalDamageReactionSetting.h"

FEndPhysicalDamageReactionSetting::FEndPhysicalDamageReactionSetting() {
    this->ConstraintSetting = NULL;
    this->ActiveTime = 1;
    this->BlendOutTime = 1;
    this->bAlwaysReset = false;
    this->bHitDirection2D = false;
    this->bDisableOnExtraAction = false;
}

