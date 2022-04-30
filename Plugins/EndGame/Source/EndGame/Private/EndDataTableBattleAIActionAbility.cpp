#include "EndDataTableBattleAIActionAbility.h"

FEndDataTableBattleAIActionAbility::FEndDataTableBattleAIActionAbility() {
    this->InID = 0;
    this->InTime = 1;
    this->InTimeout = 1;
    this->InATB = 1;
    this->InRandomATB = 1;
    this->InMinRange = 1;
    this->InMaxRange = 1;
    this->InActionMin = 1;
    this->InActionMax = 1;
    this->InActionHeightMin = 1;
    this->InActionHeightMax = 1;
    this->InViewRange = 1;
    this->ViewReverse = false;
    this->InDelayMove = 1;
    this->InDelayAbility = 1;
    this->InRandomDelayAbility = 1;
    this->InNeedMove = false;
    this->InNeedBetterMove = false;
    this->InAerialNeedMove = false;
    this->InCancelLostTarget = false;
    this->Purpose = 0;
    this->InNeedSee = false;
}

