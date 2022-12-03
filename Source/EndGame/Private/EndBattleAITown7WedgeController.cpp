#include "EndBattleAITown7WedgeController.h"

class AEndCharacter;

void AEndBattleAITown7WedgeController::StopFlee() {
}

void AEndBattleAITown7WedgeController::StopConfront() {
}

void AEndBattleAITown7WedgeController::StartFlee(TArray<AEndCharacter*> Targets) {
}

void AEndBattleAITown7WedgeController::StartConfront(float Distance) {
}

bool AEndBattleAITown7WedgeController::IsFleeing() {
    return false;
}

bool AEndBattleAITown7WedgeController::IsConfronting() {
    return false;
}

void AEndBattleAITown7WedgeController::EndRootMovement() {
}

void AEndBattleAITown7WedgeController::BeginRootMovement() {
}

AEndBattleAITown7WedgeController::AEndBattleAITown7WedgeController() {
    this->Level = 1;
    this->FleeMovementGoalRadius = 0.00f;
    this->FleeLocationResetDuration = 2.00f;
    this->FleeLocationResetDistance = 500.00f;
}

