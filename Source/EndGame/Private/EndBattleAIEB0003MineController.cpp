#include "EndBattleAIEB0003MineController.h"

class AEndCharacter;

void AEndBattleAIEB0003MineController::SetOverrideFollowTarget(AEndCharacter* InChara) {
}

void AEndBattleAIEB0003MineController::SetFollow(bool InFollow, FVector InLocation) {
}

void AEndBattleAIEB0003MineController::ReadySpark(int32 sparkID) {
}



bool AEndBattleAIEB0003MineController::IsRolling() {
    return false;
}

bool AEndBattleAIEB0003MineController::IsPlayerInConfirmSpark() {
    return false;
}

AEndBattleAIEB0003MineController::AEndBattleAIEB0003MineController() {
    this->MineMaxSpeed = 1;
    this->MineSnapSpeed = 1;
    this->MineSnapEndQuantity = 1;
    this->RenoDistance = 1;
    this->UcpcDistance = 1;
    this->RepulsiveDistance = 1;
    this->RepulsiveAccQuantity = 1;
    this->MineMoveInterval = 1;
    this->RepulsiveOriginInterval = 1;
    this->bCanFollow = true;
    this->bCanRollingAtack = false;
    this->RollingAtackStartDistance = 1;
    this->RollingAtackPhase1Time = 1;
    this->RollingAtackPhase1Height = 1;
    this->RollingAtackSpeed = 1;
    this->RollingAtackRadius = 1;
    this->RollingAtackFinish = 1;
    this->ReturnSpeed = 1;
    this->TurnSpeed = 1;
}

