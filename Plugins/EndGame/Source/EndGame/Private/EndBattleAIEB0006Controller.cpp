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
    this->JumpTurnTime = 1;
    this->JumpTurnBias = 1;
    this->DivePrepareRotateYaw = 1;
    this->DivePrepareRotatePitch = 1;
    this->DiveLoopRotateYaw = 1;
    this->DiveLoopRotatePitch = 1;
    this->DiveBeginSpeed = 1;
    this->DiveAddSpeed = 1;
    this->DiveOffsetZ = 1;
}

