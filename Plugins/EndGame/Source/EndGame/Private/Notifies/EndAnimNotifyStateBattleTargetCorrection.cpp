#include "EndAnimNotifyStateBattleTargetCorrection.h"

UEndAnimNotifyStateBattleTargetCorrection::UEndAnimNotifyStateBattleTargetCorrection() {
    this->Type = EEndBattleTargetCorrectionType::Normal;
    this->bOverrideDirectionAngle = false;
    this->OverrideDirectionAngle = 1;
    this->bOverrideDirectionAngleLeftRight = false;
    this->OverrideDirectionAngleLeft = 1;
    this->OverrideDirectionAngleRight = 1;
    this->bOverrideDistance = false;
    this->OverrideDistance = 1;
    this->bDisableDistanceBehind = false;
    this->bOverrideNotDistanceMoveStop = false;
    this->OverrideNotDistanceMoveStopType = EEndBattleAbilityTargetCloseMoveType::Stop;
}

