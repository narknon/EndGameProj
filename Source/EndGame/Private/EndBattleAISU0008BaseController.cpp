#include "EndBattleAISU0008BaseController.h"

AEndBattleAISU0008BaseController::AEndBattleAISU0008BaseController() {
    this->DashDamageID = TEXT("SU0008_00_Atk000");
    this->RunJumpAnimationName = TEXT("B_AtkRunJump01");
    this->DoJumpDistance = 100.00f;
    this->DoJumpHeight = 150.00f;
    this->JumpIntervalTime = 3.00f;
}

