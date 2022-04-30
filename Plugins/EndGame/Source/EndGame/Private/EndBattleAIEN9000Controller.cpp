#include "EndBattleAIEN9000Controller.h"

class AEndCharacter;

void AEndBattleAIEN9000Controller::SetLineDefencePoint(FVector PointA, FVector PointB) {
}

void AEndBattleAIEN9000Controller::SetLineDefence(bool InVisible) {
}

void AEndBattleAIEN9000Controller::SetDisableTarget(bool disable) {
}

void AEndBattleAIEN9000Controller::ResetEndCutSceneTransformCorrection(FName CharaName) {
}

void AEndBattleAIEN9000Controller::ResetEndCutSceneCorrectionHeight(FName CharaName) {
}

void AEndBattleAIEN9000Controller::DisappearChildSyncAction(FName parentSyncActionID, AEndCharacter* parentOwnerChara) {
}

void AEndBattleAIEN9000Controller::CreateSyncActionPlayFromLoop(FName parentSyncActionID, FName childSyncActionID1, FName childSyncActionID2, FName childSyncActionID3, FName childSyncActionID4, FName childOwnerCharaName1, FName childOwnerCharaName2, FName childOwnerCharaName3, FName childOwnerCharaName4, FName TargetCharaName) {
}

void AEndBattleAIEN9000Controller::AddChildSyncAction(FName parentSyncActionID, FName childSyncActionID, AEndCharacter* ownerChara, AEndCharacter* targetChara) {
}

AEndBattleAIEN9000Controller::AEndBattleAIEN9000Controller() {
    this->bRepulsiveXY = true;
    this->bRepulsiveZ = false;
    this->bLineDefence = true;
}

