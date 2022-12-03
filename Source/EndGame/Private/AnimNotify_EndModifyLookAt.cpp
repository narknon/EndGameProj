#include "AnimNotify_EndModifyLookAt.h"

UAnimNotify_EndModifyLookAt::UAnimNotify_EndModifyLookAt() {
    this->ModifierType = EEndLookAtModifierType::None;
    this->bForceEnableLookAtMeshSpace = false;
    this->WeightBias = 1.00f;
    this->WeightBiasBlendInTime = 0.20f;
    this->WeightBiasBlendOutTime = 0.20f;
}

