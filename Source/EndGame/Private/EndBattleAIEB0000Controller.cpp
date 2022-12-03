#include "EndBattleAIEB0000Controller.h"

void AEndBattleAIEB0000Controller::SetForceJumpEnd() {
}

void AEndBattleAIEB0000Controller::RequestWallJump(int32 InID, float InTime, float InBias) {
}

void AEndBattleAIEB0000Controller::ReleaseWallJump(int32 InID, float InTime, float InBias) {
}



bool AEndBattleAIEB0000Controller::IsTurnJump() {
    return false;
}

bool AEndBattleAIEB0000Controller::IsOnWall() {
    return false;
}

bool AEndBattleAIEB0000Controller::IsOnFloor() {
    return false;
}

bool AEndBattleAIEB0000Controller::IsGSFly() {
    return false;
}

AEndBattleAIEB0000Controller::AEndBattleAIEB0000Controller() {
    this->JumpTurnTime = 1.00f;
    this->JumpTurnBias = 4000.00f;
    this->JumpTurnAngle = 90.00f;
}

