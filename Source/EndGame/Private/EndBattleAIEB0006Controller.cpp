#include "EndBattleAIEB0006Controller.h"

void AEndBattleAIEB0006Controller::SetForceJumpEnd() {
}

void AEndBattleAIEB0006Controller::RequestWallJump(int32 InID, float InTime, float InBias) {
}

void AEndBattleAIEB0006Controller::RequestTurnJump(FVector Target) {
}

void AEndBattleAIEB0006Controller::ReleaseWallJump(int32 InID, float InTime, float InBias) {
}

bool AEndBattleAIEB0006Controller::IsOnWall() {
    return false;
}

bool AEndBattleAIEB0006Controller::IsOnFloor() {
    return false;
}

bool AEndBattleAIEB0006Controller::IsHHFly() {
    return false;
}

AEndBattleAIEB0006Controller::AEndBattleAIEB0006Controller() {
    this->JumpTurnTime = 1.00f;
    this->JumpTurnBias = 4000.00f;
    this->DivePrepareRotateYaw = 360.00f;
    this->DivePrepareRotatePitch = 360.00f;
    this->DiveLoopRotateYaw = 180.00f;
    this->DiveLoopRotatePitch = 180.00f;
    this->DiveBeginSpeed = 1000.00f;
    this->DiveAddSpeed = 1000.00f;
    this->DiveOffsetZ = 200.00f;
}

