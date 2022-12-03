#include "EndBattleAISU0003BaseController.h"

AEndBattleAISU0003BaseController::AEndBattleAISU0003BaseController() {
    this->RollAbilityID = TEXT("SU0003_00_Atk003");
    this->RollBackAbilityID = TEXT("SU0003_00_Atk003_r");
    this->AbilityTurnAngle = 30.00f;
    this->RollBackAngle = 60.00f;
}

