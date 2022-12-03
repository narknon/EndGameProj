#include "EndBattleAIEB0005Controller.h"

class AEndCharacter;

void AEndBattleAIEB0005Controller::ChangeRideMode(ERideMode rideMode) {
}

void AEndBattleAIEB0005Controller::BlowSunglass(AEndCharacter* damageCauserChara) {
}

AEndBattleAIEB0005Controller::AEndBattleAIEB0005Controller() {
    this->FastMoveSpeed = 10000.00f;
    this->FastMoveRange = 2000.00f;
    this->FastBeginToLoopBlendTime = 0.05f;
    this->FastLoopToEndBlendTime = 0.05f;
    this->FastNextBlendTime = 0.00f;
}

