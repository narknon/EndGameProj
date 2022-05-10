#include "AccelModifier.h"

FAccelModifier::FAccelModifier() {
    this->MinVelocity = 1;
    this->MaxVelocity = 1;
    this->AccelEasingFunc = EEasingFunc::Linear;
    this->DecelEasingFunc = EEasingFunc::Linear;
    this->ModifyDuration = 1;
    this->JumpEasingFunc = EEasingFunc::Linear;
    this->ModifyJumpDuration = 1;
    this->CutSceneMinVelocity = 1;
    this->CutSceneMaxVelocity = 1;
    this->NpcMinVelocity = 1;
    this->NpcMaxVelocity = 1;
    this->AccelBlendExp = 1;
    this->AccelSteps = 0;
    this->DecelBlendExp = 1;
    this->DecelSteps = 0;
    this->ElapsedModifyTime = 1;
    this->CurrentModifyAccelVelocity = 1;
    this->RemainDuration = 1;
    this->CachedVelocity = 1;
    this->CachedElapsedModifyTime = 1;
    this->JumpBlendExp = 1;
    this->JumpSteps = 0;
    this->ElapsedModifyJumpTime = 1;
    this->CachedBeforeJumpVelocity = 1;
    this->CachedBeforeCutSceneVelocity = 1;
}

