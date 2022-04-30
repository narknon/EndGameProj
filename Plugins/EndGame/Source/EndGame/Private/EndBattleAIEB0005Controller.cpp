#include "EndBattleAIEB0005Controller.h"

class AEndCharacter;

void AEndBattleAIEB0005Controller::ChangeRideMode(ERideMode rideMode) {
}

void AEndBattleAIEB0005Controller::BlowSunglass(AEndCharacter* damageCauserChara) {
}

AEndBattleAIEB0005Controller::AEndBattleAIEB0005Controller() {
    this->FastMoveSpeed = 1;
    this->FastMoveRange = 1;
    this->FastBeginToLoopBlendTime = 1;
    this->FastLoopToEndBlendTime = 1;
    this->FastNextBlendTime = 1;
}

