#include "EndBattleAISU0008BaseController.h"

AEndBattleAISU0008BaseController::AEndBattleAISU0008BaseController() {
    this->DashDamageID = TEXT("SU0008_00_Atk000");
    this->RunJumpAnimationName = TEXT("B_AtkRunJump01");
    this->DoJumpDistance = 1;
    this->DoJumpHeight = 1;
    this->JumpIntervalTime = 1;
}

