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
    this->MineMaxSpeed = 100.00f;
    this->MineSnapSpeed = 1000.00f;
    this->MineSnapEndQuantity = 0.90f;
    this->RenoDistance = 150.00f;
    this->UcpcDistance = 150.00f;
    this->RepulsiveDistance = 150.00f;
    this->RepulsiveAccQuantity = 1.00f;
    this->MineMoveInterval = 0.00f;
    this->RepulsiveOriginInterval = 0.00f;
    this->bCanFollow = true;
    this->bCanRollingAtack = false;
    this->RollingAtackStartDistance = 500.00f;
    this->RollingAtackPhase1Time = 1.00f;
    this->RollingAtackPhase1Height = 300.00f;
    this->RollingAtackSpeed = 360.00f;
    this->RollingAtackRadius = 200.00f;
    this->RollingAtackFinish = 1.00f;
    this->ReturnSpeed = 5000.00f;
    this->TurnSpeed = 1.00f;
}

