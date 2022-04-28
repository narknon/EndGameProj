#include "AnimNotify_EndModifyLookAt.h"

UAnimNotify_EndModifyLookAt::UAnimNotify_EndModifyLookAt() {
    this->ModifierType = EEndLookAtModifierType::None;
    this->bForceEnableLookAtMeshSpace = false;
    this->WeightBias = 1;
    this->WeightBiasBlendInTime = 1;
    this->WeightBiasBlendOutTime = 1;
}

