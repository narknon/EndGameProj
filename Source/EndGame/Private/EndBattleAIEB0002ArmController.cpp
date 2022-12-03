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
    this->ArmHeightIdle = 0.00f;
    this->ArmHeightAroundIdle = 50.00f;
    this->ArmHeightSideAttack1 = 150.00f;
    this->ArmHeightSideAttack2 = 150.00f;
    this->ArmHeightTargetAroundIdle = 150.00f;
    this->ArmRotateSpeedIdle = 0.00f;
    this->ArmDistanceIdle = 600.00f;
    this->ArmDistanceAroundIdle = 1200.00f;
    this->ArmDistanceSideAttack1 = 700.00f;
    this->ArmDistanceSideAttack2 = 700.00f;
    this->ArmDistanceTargetAroundIdle = 700.00f;
    this->ArmHeightCatch = 0.00f;
    this->ArmDistanceCatch = 100.00f;
    this->ArmThrowHeight = 200.00f;
    this->ArmThrowAngle = 0.00f;
    this->ArmThrowRollAngle = 0.00f;
    this->ArmThrowRollSpeed = 1.00f;
    this->ArmPointAngle = 0.00f;
    this->ArmPointHeight = 100.00f;
    this->ArmPointDistance = 100.00f;
    this->ArmRotateSpec = 1.00f;
    this->bAutoArmPhase = true;
}

