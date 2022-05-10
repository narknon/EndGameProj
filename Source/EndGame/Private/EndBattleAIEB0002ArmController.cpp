#include "EndBattleAIEB0002ArmController.h"

void AEndBattleAIEB0002ArmController::SetArmPhase(EArmPhase InPhase) {
}

void AEndBattleAIEB0002ArmController::OnRocketPunchStart() {
}

void AEndBattleAIEB0002ArmController::OnRocketPunchFinished() {
}







void AEndBattleAIEB0002ArmController::OnEjectStart(float MoveSpeed, float LifeTime, float targetRadius) {
}

void AEndBattleAIEB0002ArmController::OnEjectFinished() {
}

void AEndBattleAIEB0002ArmController::OnDockingStartLinear(float arrivalTime) {
}

void AEndBattleAIEB0002ArmController::OnDockingStart(float MoveSpeed, float LifeTime, float targetRadius) {
}

void AEndBattleAIEB0002ArmController::OnDockingFinished() {
}

void AEndBattleAIEB0002ArmController::OnDetachArm(bool enableAI) {
}

bool AEndBattleAIEB0002ArmController::IsLeftArm() {
    return false;
}

EArmPhase AEndBattleAIEB0002ArmController::GetArmPhase() {
    return EArmPhase::eIdle;
}

AEndBattleAIEB0002ArmController::AEndBattleAIEB0002ArmController() {
    this->ArmHeightIdle = 1;
    this->ArmHeightAroundIdle = 1;
    this->ArmHeightSideAttack1 = 1;
    this->ArmHeightSideAttack2 = 1;
    this->ArmHeightTargetAroundIdle = 1;
    this->ArmRotateSpeedIdle = 1;
    this->ArmDistanceIdle = 1;
    this->ArmDistanceAroundIdle = 1;
    this->ArmDistanceSideAttack1 = 1;
    this->ArmDistanceSideAttack2 = 1;
    this->ArmDistanceTargetAroundIdle = 1;
    this->ArmHeightCatch = 1;
    this->ArmDistanceCatch = 1;
    this->ArmThrowHeight = 1;
    this->ArmThrowAngle = 1;
    this->ArmThrowRollAngle = 1;
    this->ArmThrowRollSpeed = 1;
    this->ArmPointAngle = 1;
    this->ArmPointHeight = 1;
    this->ArmPointDistance = 1;
    this->ArmRotateSpec = 1;
    this->bAutoArmPhase = true;
}

