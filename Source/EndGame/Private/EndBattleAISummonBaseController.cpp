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
    this->WarpMoveDistance = 1200.00f;
    this->UseWarpPointDistance = 600.00f;
    this->CoolDownDistance = 600.00f;
    this->EscortDistance = 600.00f;
    this->SightAngle = 60.00f;
    this->MaxDistanceFromOwner = 1500.00f;
}

