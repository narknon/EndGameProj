#include "EndBattleAISU0004_02Controller.h"

void AEndBattleAISU0004_02Controller::RequestFollowLocationFromName(const FName& InName, float InTolerance) {
}

void AEndBattleAISU0004_02Controller::RequestFollowLocation(FVector InLocation, float InTolerance) {
}


bool AEndBattleAISU0004_02Controller::IsFollowLocation() {
    return false;
}

AEndBattleAISU0004_02Controller::AEndBattleAISU0004_02Controller() {
    this->TornadoMaxSpeed = 1;
    this->UcpcDistance = 1;
    this->RepulsiveDistance = 1;
    this->RepulsiveAccQuantity = 1;
    this->TornadoMoveInterval = 1;
    this->RepulsiveOriginInterval = 1;
    this->bCanFollow = true;
    this->MoveEndQuantity = 1;
}

