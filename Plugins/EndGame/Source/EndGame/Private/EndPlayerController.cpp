#include "EndPlayerController.h"

AEndPlayerController::AEndPlayerController() {
    this->PlayerTrigger = NULL;
    this->EndCapsuleOverlapComponent = NULL;
    this->PlayerExistNavAreaComponent = NULL;
    this->LeaderCharacter = NULL;
    this->BattleTalkOnEndBattleClass = NULL;
    this->BattleTalkOnEndBattle = NULL;
    this->MaxMouseSensitivity = 1;
    this->MinMouseSensitivity = 1;
}

