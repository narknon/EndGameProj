#include "EndBattleAIRoleParam.h"

FEndBattleAIRoleParam::FEndBattleAIRoleParam() {
    this->bRoleUpdateSetting = false;
    this->DistanceNear = 1;
    this->DistanceConfront = 1;
    this->DistanceFar = 1;
    this->bCanPositionAngle = false;
    this->PositionAngle = 1;
    this->Strafe = false;
    this->DistanceStrafe = 1;
    this->ATBSpeed = 1;
}

