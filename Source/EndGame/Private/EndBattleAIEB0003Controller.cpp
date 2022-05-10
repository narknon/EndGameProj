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
    this->FastMoveSpeed = 1;
    this->FastMoveRange = 1;
    this->FastMoveLoopAngleQuantity = 1;
    this->FastMoveFriction = 1;
    this->FastNextBlendTime = 1;
    this->FastBeginToLoopBlendTime = 1;
    this->FastLoopToEndBlendTime = 1;
    this->FastMoveStartAnimRotate = false;
}

