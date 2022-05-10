#include "EndBattleAISummonBaseController.h"

void AEndBattleAISummonBaseController::WarpToCachedLocation() {
}

void AEndBattleAISummonBaseController::SetDrawPause(bool bFlag) {
}

bool AEndBattleAISummonBaseController::RequestWarpTo(FVector WarpLocation) {
    return false;
}

void AEndBattleAISummonBaseController::RequestShowCutSceneAbilityName() {
}


void AEndBattleAISummonBaseController::OnAppearNotify() {
}

AEndBattleAISummonBaseController::AEndBattleAISummonBaseController() {
    this->WarpMoveDistance = 1;
    this->UseWarpPointDistance = 1;
    this->CoolDownDistance = 1;
    this->EscortDistance = 1;
    this->SightAngle = 1;
    this->MaxDistanceFromOwner = 1;
}

