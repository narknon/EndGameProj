#include "EndBattleAIRoleParam.h"

FEndBattleAIRoleParam::FEndBattleAIRoleParam() {
    this->bRoleUpdateSetting = false;
    this->DistanceNear = 0.00f;
    this->DistanceConfront = 0.00f;
    this->DistanceFar = 0.00f;
    this->bCanPositionAngle = false;
    this->PositionAngle = 0.00f;
    this->Strafe = false;
    this->DistanceStrafe = 0.00f;
    this->ATBSpeed = 0.00f;
}

