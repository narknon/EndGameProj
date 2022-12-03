#include "EndAnimNotifyStateBattleTargetCorrection.h"

UEndAnimNotifyStateBattleTargetCorrection::UEndAnimNotifyStateBattleTargetCorrection() {
    this->Type = EEndBattleTargetCorrectionType::Normal;
    this->bOverrideDirectionAngle = false;
    this->OverrideDirectionAngle = 0.00f;
    this->bOverrideDirectionAngleLeftRight = false;
    this->OverrideDirectionAngleLeft = 0.00f;
    this->OverrideDirectionAngleRight = 0.00f;
    this->bOverrideDistance = false;
    this->OverrideDistance = 2000.00f;
    this->bDisableDistanceBehind = false;
    this->bOverrideNotDistanceMoveStop = false;
    this->OverrideNotDistanceMoveStopType = EEndBattleAbilityTargetCloseMoveType::None;
}

