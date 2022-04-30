#include "EndBattleAISU0001BaseController.h"

class AEndCharacter;

void AEndBattleAISU0001BaseController::SetTarget(AEndCharacter* InChara) {
}

void AEndBattleAISU0001BaseController::SetMoogleBombHidden(bool IsHidden) {
}

AEndBattleAISU0001BaseController::AEndBattleAISU0001BaseController() {
    this->MoogleBombHoldingStartAnimation = TEXT("B_AtkBomb01_0");
    this->MoogleBombHoldingIdleAnimation = TEXT("B_AtkBomb01_1");
}

