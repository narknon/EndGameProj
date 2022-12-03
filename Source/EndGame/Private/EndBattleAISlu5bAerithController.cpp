#include "EndBattleAISlu5bAerithController.h"

class AEndCharacter;

void AEndBattleAISlu5bAerithController::OnUpdateGuestAerith_Implementation(float DeltaTime) {
}

void AEndBattleAISlu5bAerithController::LookAtOn(AEndCharacter* LookTarget) {
}

void AEndBattleAISlu5bAerithController::LookAtOff() {
}

EGuestAerithState AEndBattleAISlu5bAerithController::GetCurrnetState() {
    return EGuestAerithState::Hide;
}

void AEndBattleAISlu5bAerithController::DrawDebugCurrnetState() {
}

void AEndBattleAISlu5bAerithController::CheckSelf(float SafeDistance) {
}

void AEndBattleAISlu5bAerithController::CheckGarden() {
}

void AEndBattleAISlu5bAerithController::CheckEncouragment(float Probability, float DeltaTime) {
}

void AEndBattleAISlu5bAerithController::CheckBattleField() {
}

void AEndBattleAISlu5bAerithController::ChangeAerithState(EGuestAerithState NewState) {
}

AEndBattleAISlu5bAerithController::AEndBattleAISlu5bAerithController() {
    this->EncourageRecastTime = 5.00f;
    this->CheeringRecastTime = 5.00f;
    this->WorryRecastTime = 3.00f;
    this->MinimumHideTime = 1.00f;
    this->ATBIncreasment = 100.00f;
}

