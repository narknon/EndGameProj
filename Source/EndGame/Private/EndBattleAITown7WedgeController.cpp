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
    this->Level = 0;
    this->FleeMovementGoalRadius = 1;
    this->FleeLocationResetDuration = 1;
    this->FleeLocationResetDistance = 1;
}

