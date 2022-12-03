#include "EndBattleAISU0009BaseController.h"

void AEndBattleAISU0009BaseController::CreateFlareDamage(const FName ToTargetDamageID, const FName ToOthersDamageID) {
}

AEndBattleAISU0009BaseController::AEndBattleAISU0009BaseController() {
    this->AreaAbilityCoefficient = -60.00f;
    this->WinningPoseMotionName = TEXT("B_Idle02_1");
}

