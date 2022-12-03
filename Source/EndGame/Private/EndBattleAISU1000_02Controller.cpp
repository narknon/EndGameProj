#include "EndBattleAISU1000_02Controller.h"

class AEndCharacter;

void AEndBattleAISU1000_02Controller::SetOverrideFollowTarget(AEndCharacter* InChara) {
}

void AEndBattleAISU1000_02Controller::SetFollow(bool InFollow, FVector InLocation) {
}

void AEndBattleAISU1000_02Controller::ResetConditionAfterThrown() {
}


AEndBattleAISU1000_02Controller::AEndBattleAISU1000_02Controller() {
    this->CoreMaxSpeed = 100.00f;
    this->CoreSnapSpeed = 1000.00f;
    this->CoreSnapEndQuantity = 0.90f;
    this->RamuhDistance = 150.00f;
    this->UcpcDistance = 150.00f;
    this->RepulsiveDistance = 150.00f;
    this->RepulsiveAccQuantity = 1.00f;
    this->CoreMoveInterval = 0.00f;
    this->RepulsiveOriginInterval = 0.00f;
    this->bCanFollow = true;
    this->ReturnSpeed = 5000.00f;
    this->TurnSpeed = 1.00f;
    this->FixedFieldLocationInterpSpeed = 1.00f;
}

