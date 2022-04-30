#include "EndCharacterAttachEffectArguments.h"

FEndCharacterAttachEffectArguments::FEndCharacterAttachEffectArguments() {
    this->ResourceCategory = EEndCharacterAttachEffectResourceCategoryType::Resident;
    this->ResourceChara = NULL;
    this->bRemoveOnEscape = false;
    this->bRemoveOnDeath = false;
    this->bDetachOnRemove = false;
    this->BeamTargetChara = NULL;
    this->bBeamTargetDisableContactTargetChara = false;
    this->bBeamTargetContactWall = false;
    this->bBeamTargetContactOwnerChara = false;
    this->bLineEffect = false;
    this->LineEffectTangentLength = 1;
    this->CreateSecondMin = 1;
    this->CreateSecondMax = 1;
    this->LoopOffSecondMin = 1;
    this->LoopOffSecondMax = 1;
    this->ReCreateSecondMin = 1;
    this->ReCreateSecondMax = 1;
}

