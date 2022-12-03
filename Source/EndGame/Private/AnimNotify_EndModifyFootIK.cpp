#include "AnimNotify_EndModifyFootIK.h"

UAnimNotify_EndModifyFootIK::UAnimNotify_EndModifyFootIK() {
    this->ModifierType = EEndFootIKModifierType::None;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
}

