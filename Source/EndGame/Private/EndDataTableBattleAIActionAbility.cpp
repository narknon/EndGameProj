#include "EndDataTableBattleAIActionAbility.h"

FEndDataTableBattleAIActionAbility::FEndDataTableBattleAIActionAbility() {
    this->InID = 0;
    this->InTime = 0.00f;
    this->InTimeout = 0.00f;
    this->InATB = 0.00f;
    this->InRandomATB = 0.00f;
    this->InMinRange = 0.00f;
    this->InMaxRange = 0.00f;
    this->InActionMin = 0.00f;
    this->InActionMax = 0.00f;
    this->InActionHeightMin = 0.00f;
    this->InActionHeightMax = 0.00f;
    this->InViewRange = 0.00f;
    this->ViewReverse = false;
    this->InDelayMove = 0.00f;
    this->InDelayAbility = 0.00f;
    this->InRandomDelayAbility = 0.00f;
    this->InNeedMove = false;
    this->InNeedBetterMove = false;
    this->InAerialNeedMove = false;
    this->InCancelLostTarget = false;
    this->Purpose = 0;
    this->InNeedSee = false;
}

