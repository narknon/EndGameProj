#include "EndBattleAISU0004_02Controller.h"

void AEndBattleAISU0004_02Controller::RequestFollowLocationFromName(const FName& InName, float InTolerance) {
}

void AEndBattleAISU0004_02Controller::RequestFollowLocation(FVector InLocation, float InTolerance) {
}


bool AEndBattleAISU0004_02Controller::IsFollowLocation() {
    return false;
}

AEndBattleAISU0004_02Controller::AEndBattleAISU0004_02Controller() {
    this->TornadoMaxSpeed = 100.00f;
    this->UcpcDistance = 150.00f;
    this->RepulsiveDistance = 150.00f;
    this->RepulsiveAccQuantity = 1.00f;
    this->TornadoMoveInterval = 0.00f;
    this->RepulsiveOriginInterval = 0.00f;
    this->bCanFollow = true;
    this->MoveEndQuantity = 0.90f;
}

