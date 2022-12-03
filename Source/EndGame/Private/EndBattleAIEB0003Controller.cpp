#include "EndBattleAIEB0003Controller.h"

void AEndBattleAIEB0003Controller::StopFlashDashEffect() {
}

void AEndBattleAIEB0003Controller::SetNextFlashDashPoint(FVector Point) {
}

void AEndBattleAIEB0003Controller::SetNextFastPoint(FVector Point) {
}

void AEndBattleAIEB0003Controller::PlayEffectOnce(FName InName) {
}




bool AEndBattleAIEB0003Controller::IsPlayerInConfirmSpark() {
    return false;
}

void AEndBattleAIEB0003Controller::FinishRollingAtack() {
}

void AEndBattleAIEB0003Controller::CleanFlashDash() {
}

AEndBattleAIEB0003Controller::AEndBattleAIEB0003Controller() {
    this->FastMoveSpeed = 10000.00f;
    this->FastMoveRange = 2000.00f;
    this->FastMoveLoopAngleQuantity = 0.00f;
    this->FastMoveFriction = 1000.00f;
    this->FastNextBlendTime = 0.00f;
    this->FastBeginToLoopBlendTime = 0.05f;
    this->FastLoopToEndBlendTime = 0.05f;
    this->FastMoveStartAnimRotate = false;
}

