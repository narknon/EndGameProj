#include "AnimNotify_EndModifyFootIK.h"

UAnimNotify_EndModifyFootIK::UAnimNotify_EndModifyFootIK() {
    this->ModifierType = EEndFootIKModifierType::None;
    this->BlendInTime = 1;
    this->BlendOutTime = 1;
}

