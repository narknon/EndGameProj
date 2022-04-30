#include "EndBattleAISU1000_02Controller.h"

class AEndCharacter;

void AEndBattleAISU1000_02Controller::SetOverrideFollowTarget(AEndCharacter* InChara) {
}

void AEndBattleAISU1000_02Controller::SetFollow(bool InFollow, FVector InLocation) {
}

void AEndBattleAISU1000_02Controller::ResetConditionAfterThrown() {
}


AEndBattleAISU1000_02Controller::AEndBattleAISU1000_02Controller() {
    this->CoreMaxSpeed = 1;
    this->CoreSnapSpeed = 1;
    this->CoreSnapEndQuantity = 1;
    this->RamuhDistance = 1;
    this->UcpcDistance = 1;
    this->RepulsiveDistance = 1;
    this->RepulsiveAccQuantity = 1;
    this->CoreMoveInterval = 1;
    this->RepulsiveOriginInterval = 1;
    this->bCanFollow = true;
    this->ReturnSpeed = 1;
    this->TurnSpeed = 1;
    this->FixedFieldLocationInterpSpeed = 1;
}

