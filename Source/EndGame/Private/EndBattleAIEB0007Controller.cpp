#include "EndBattleAIEB0007Controller.h"

class AEndCharacter;

void AEndBattleAIEB0007Controller::ToGraviticJump(const FVector& landingLocation, float Height, float PeakBias, float turningDuration, const FVector& UpVector, const FVector& forwardVector, bool bToTerrain) {
}

void AEndBattleAIEB0007Controller::RequestSpawnBrokenTail(FName CharaSpecName, FVector hidePosition, bool spawnedInvisible, FName SocketName) {
}

void AEndBattleAIEB0007Controller::RequestRunBrokenTail() {
}

void AEndBattleAIEB0007Controller::RequestResetBrokenTail() {
}

void AEndBattleAIEB0007Controller::GetSprinkleWaterInRangeTargetCharacter(const FName& NodeName, const TArray<EPlayerType> playerTypes, float RangeRadius, TArray<AEndCharacter*>& outCharacters) {
}

void AEndBattleAIEB0007Controller::GetSprinkleWaterInRangePointNames(const TArray<FName>& nodeNames, float RangeRadius, float rangeDistance, TArray<FName>& outNames, FName& outNearName) {
}

void AEndBattleAIEB0007Controller::GetSprinkleWaterInAnglePointNames(const TArray<FName>& nodeNames, float rangeAngle, float rangeDistance, TArray<FName>& outNames, FName& outNearName) {
}

AEndBattleAIEB0007Controller::AEndBattleAIEB0007Controller() {
    this->EnableOverrideHeight = false;
    this->OverrideHeight = 1;
    this->EnableOverridePeakBias = false;
    this->OverridePeakBias = 1;
    this->EnableOverrideTurningDuration = false;
    this->OverrideTurningDuration = 1;
    this->EnableSprinkleWaterDraw = false;
}

